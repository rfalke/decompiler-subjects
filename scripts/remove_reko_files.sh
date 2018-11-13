#!/bin/sh

find . -name 'by_reko*' | grep -v from_decompile-it.com | grep -v malware_via_email | grep -v from_pouet.net | xargs rm
