#!/bin/bash
DAY=$(date +%F)
cd /home/archana/Pictures
for FILE in *.png
 do
    mv "$FILE" "${DAY}-${FILE}"
 done
 ls /home/archana/Pictures
