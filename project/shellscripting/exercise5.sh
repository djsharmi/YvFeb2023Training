#! /bin/bash
echo "enter the file path"
read x
if [ -f "$x" ]
then
	echo "$x is regular file"
elif [ -d "$x"]
then
	echo "$x is directory"
else
	echo "$x is another type of file"
fi
ls -la $x

