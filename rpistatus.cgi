#!/bin/bash
echo -e "Content-type: text/html\n\n"
piarray="rpi00 rpi01 rpi02 rpi03 rpi04 rpi05 rpi06 rpi07 rpi08 rpi09 rpi10 rpi11 rpi12 rpi13 rpi14 rpi15 rpi16 rpi17 rpi18 rpi19 rpi20"
for i in $piarray; do 
(ping -c 1 "$i") > /dev/null && echo "$i alive" || echo "$i dead"
 done
