#!/bin/bash

find . -name by_decompiler.sf.net.out  | xargs cat | ./scripts/summarize_decompiler.sf.net.py
