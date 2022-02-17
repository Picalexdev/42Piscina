cat /etc/passwd | grep -v "#" | awk "NR%2==1" | sort -r | cut -d ':' -f1 | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | rev | tr '\n' ' ' | sed 's/ /, /g' | sed 's/, *$/\./' | tr -d '\n'
