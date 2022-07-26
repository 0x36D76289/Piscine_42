#!/bin/sh

cat /etc/passwd | grep -v '#' | awk --field-separator ':' 'NR%2==0 {print $1}' | rev | sort -r -d | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed 's/, */, /g' | sed 's/..$/./g'