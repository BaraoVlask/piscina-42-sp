#!/bin/sh
diff <(ls -1 -d */) <(ls -p -R | grep .) | grep \> | wc -l
