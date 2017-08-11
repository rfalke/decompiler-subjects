#!/bin/sh

find . -name 'by_holdec*' | grep -v by_holdec_hinted.hints | xargs rm
