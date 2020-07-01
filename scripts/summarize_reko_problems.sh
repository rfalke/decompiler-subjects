#!/bin/bash

find . -name by_reko.out  | grep -v malware_via_email | grep -v from_pouet | sort >files
./scripts/summarize_reko_problems.py
rm files
