#! /usr/bin/bash

cat /etc/shadow
if (( "$?"==0 ))
then 
	echo "command succedded"
	exit 0
else 
	echo "command failed"
	exit 1
fi

