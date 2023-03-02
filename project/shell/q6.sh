#! /bin/bash
file1=$@
for file in $file1
do
if [ -f "$file" ]
then 
echo "$file is a regular file"
elif [ -d "$file" ]
then
echo "$file is directory"
else

echo "another type of file"
fi
done

