#!/bin/bash

find . -name by_reko.out  | xargs cat | ./scripts/summarize_reko_problems.py
