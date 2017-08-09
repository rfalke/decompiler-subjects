#!/bin/sh
#
# Project:   retdec-sh
# Homepage:  https://github.com/s3rvac/retdec-sh
# Copyright: (c) 2015 by Petr Zemek <s3rvac@gmail.com> and contributors
# License:   MIT, see the LICENSE file for more details
#
# Description:
#
#     Decompiles the given binary file through the retdec.com decompilation
#     service by using their public REST API.
#
# Software requirements:
#
#  - shell (bash, dash, ...)
#  - curl (https://curl.haxx.se/)
#
# Other requirements:
#
#  - a retdec.com API key (you can get it by registering at https://retdec.com)
#

#
# Default settings.
#
API_KEY=${RETDEC_API_KEY-not set}
API_URL=${RETDEC_API_URL-https://retdec.com/service/api}
USER_AGENT="retdec-sh/$(uname -s)"

#
# Prints a help message to the standard output.
#
print_help() {
	echo "Decompiles the given binary file through the retdec.com decompilation"
	echo "service by using their public REST API."
	echo ""
	echo "Usage:"
	echo "    $0 [OPTIONS] FILE"
	echo ""
	echo "Options:"
	echo "    -g STR, --user-agent STR   User agent string to be used (default: $USER_AGENT)."
	echo "    -k KEY, --api-key KEY      API key to be used (default: $API_KEY)."
	echo "    -u URL, --api-url URL      URL of the API (default: $API_URL)."
	echo "    -h,     --help             Prints this help message and exits."
	echo ""
}

#
# Prints the given error message ($1) to the standard error.
#
print_error() {
	echo "$0: error: $1" >&2
}

#
# Prints an error message to the standard error and exits if the request
# failed.
#
# Arguments:
#
#     $1 - Return code from curl.
#     $2 - Output from curl (response to the request).
#
print_error_and_exit_if_request_failed() {
	# First, check if curl failed (e.g. a connection error).
	if [ "$1" != "0" ]; then
		print_error "$2"
		exit 2
	fi

	# curl succeeded, so check if there is an API error. Contrary to
	# fileinfo.sh, we need to check the presence of key "code", not
	# "description", because "description" is a key in "phases".
	ERROR_CODE=$(get_value "code" "$2")
	if [ ! -z "$ERROR_CODE" ]; then
		ERROR_DESCRIPTION=$(get_value "description" "$2")
		print_error "$ERROR_DESCRIPTION"
		exit 2
	fi
}

#
# Sends a request by calling curl with the given arguments.
#
# Prints the response, including errors (if any).
#
send_request() {
	curl --silent --show-error --user "$API_KEY:" --user-agent "$USER_AGENT" \
		"$@" 2>&1
}

#
# Prints a value of the given key ($1) in the given API response ($2).
#
get_value() {
	echo "$2" | grep "\"$1\"" | sed 's/[",]//g' | cut -d: -f2- | sed 's/^ *//'
}

#
# Prints a prefix of output files.
#
# Arguments:
#
#    $1 - Path to the input file.
#
get_output_file_prefix() {
	FILE=$1
	FILE_EXT=$(echo "$FILE" | awk -F . '{if (NF>1) {print $NF}}')
	if [ "$FILE_EXT" = "exe" ]; then
		FILE_WITHOUT_EXT=$(echo "$FILE" | rev | cut -d. -f2- | rev)
		echo "$FILE_WITHOUT_EXT"
	else
		echo "$FILE"
	fi
}

#
# Verify that curl is installed.
#
if ! command -v curl > /dev/null 2>&1; then
	print_error "curl (https://curl.haxx.se/) is not installed"
	exit 1
fi

#
# Parse script arguments.
#
while [ ! -z "$1" ]; do
	# -g/--user-agent
	if [ "$1" = "-g" ] || [ "$1" = "--user-agent" ]; then
		if [ -z "$2" ]; then
			print_error "missing STR after $1"
			exit 1
		fi
		USER_AGENT=$2
		shift 2
		continue
	fi

	# -h/--help
	if [ "$1" = "-h" ] || [ "$1" = "--help" ]; then
		print_help
		exit 0
	fi

	# -k/--api-key
	if [ "$1" = "-k" ] || [ "$1" = "--api-key" ]; then
		if [ -z "$2" ]; then
			print_error "missing KEY after $1"
			exit 1
		fi
		API_KEY=$2
		shift 2
		continue
	fi

	# -u/--api-url
	if [ "$1" = "-u" ] || [ "$1" = "--api-url" ]; then
		if [ -z "$2" ]; then
			print_error "missing URL after $1"
			exit 1
		fi
		API_URL=$2
		shift 2
		continue
	fi

	# The input file.
	if [ -z "$FILE" ]; then
		FILE=$1
		shift
	else
		print_error "FILE has already been given ($FILE)"
		exit 1
	fi
done

#
# Check that all the needed variables are set.
#
if [ -z "$FILE" ]; then
	print_help
	exit 1
fi
if [ "$API_KEY" = "not set" ]; then
	print_error "API key is not set (use -k/--api-key KEY or set environmental variable RETDEC_API_KEY)"
	exit 1
fi

#
# Start a decompilation of the file.
#
FILE_NAME=$(basename "$FILE")
RESPONSE=$(send_request --form "mode=bin" \
	--form "input=@$FILE;filename=$FILE_NAME" \
	"$API_URL/decompiler/decompilations")
print_error_and_exit_if_request_failed "$?" "$RESPONSE"
STATUS_URL=$(get_value "status" "$RESPONSE")
OUTPUTS_URL=$(get_value "outputs" "$RESPONSE")

#
# Wait until the decompilation is finished (or fails).
#
while true; do
	RESPONSE=$(send_request "$STATUS_URL")
	print_error_and_exit_if_request_failed "$?" "$RESPONSE"

	FAILED=$(get_value "failed" "$RESPONSE")
	if [ "$FAILED" = "true" ]; then
		ERROR=$(get_value "error" "$RESPONSE")
		print_error "$ERROR"
		exit 2
	fi

	FINISHED=$(get_value "finished" "$RESPONSE")
	if [ "$FINISHED" = "true" ]; then
		break
	fi

	# Wait a bit before the next status check so we do not abuse the API.
	sleep 1
done

#
# Download the decompiled source code.
#
RESPONSE=$(send_request "$OUTPUTS_URL/hll")
print_error_and_exit_if_request_failed "$?" "$RESPONSE"
HLL_FILE="$(get_output_file_prefix "$FILE").c"
echo "$RESPONSE" > "$HLL_FILE"
