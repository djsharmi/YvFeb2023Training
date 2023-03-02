#!/usr/bin/bash
echo -e "enter file name:\c"
read file_path

if [ -e $file_path ]
then
	echo "$file_path passwords are enable"
fi
if [ -x $file_path ]
then
	echo"you have permission to execute the $file_path"
else
	echo "you do not have permission to execute the $file_path"
fi
