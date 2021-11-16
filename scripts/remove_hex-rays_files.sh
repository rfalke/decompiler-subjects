#!/bin/sh

find . -name 'by_hex-rays*' | grep ia32 | grep -v by_hex-rays_hinted | xargs rm
find . -name 'by_hex-rays*' | grep x64 | grep -v by_hex-rays_hinted | xargs rm
