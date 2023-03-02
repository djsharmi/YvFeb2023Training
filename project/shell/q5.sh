#! /bin/bash
echo -e "enter the file name: \c"
read file_name

if [ -f $file_name ]
then
echo "$file_name is a regular file"
elif [ -d $file_name ]
then
echo "$file_name is directory"
else
echo "$file_name is a another type of file"
fi
ls -l $file_name

