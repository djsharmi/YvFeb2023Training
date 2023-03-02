#! /bin/bash
x="/home/archana/Desktop/filename.txt"
if [ -e "$x" ]
then
	echo "$x exist"
else
	echo "$x password are enbled"
fi

if [ -x "$x" ]
then
	echo "you have permision to edit $x"
else
	echo "you don't have permission to edit $x"
fi
