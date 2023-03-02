#! /bin/bash
r=$@
for x in $r
do
if [ -f "$x" ]
then
	echo "$x is reguler file"
elif [ -d "$x" ]
then
	echo "$x is directory"
else
	echo"$x is another type of file"
fi
done
