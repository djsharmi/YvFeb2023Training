#! /bin/bash
x="/home/archana/Desktop/filename2.txt"
if [ -f "$x" ]
then
	echo "$x exists"
else
	echo "$x passwords are enabled"
fi
if [ -x "$x" ]
then
	echo "you have permission to edit $x"
else
	echo "you don't have permission to edit $x"
fi
