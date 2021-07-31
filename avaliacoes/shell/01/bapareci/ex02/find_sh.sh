#!/bin/sh
ls -R | grep -e '\.sh$' | sed 's/\.sh//g'