#!/bin/sh
cat /etc/passwd | awk -F ':' '{print $1}' | awk "NR%2==0" | rev | sort -r | sed -n ""$FT_LINE1","$FT_LINE2""p | tr '.' ', ' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/..$/./'