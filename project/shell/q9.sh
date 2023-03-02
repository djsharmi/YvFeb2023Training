#! /usr/bin/bash

DAY=$(date +%F)
cd /home/nandhini/Desktop
for FILE in *.png
do
 mv "$FILE" "${DAY} - ${FILE}"
done
ls /home/nandhini/Desktop


