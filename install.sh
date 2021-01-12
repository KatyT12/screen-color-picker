#! /bin/bash


#First argument should be the output of pwd (if that is where you want the executable to be)

if [ "$#" -ne 2 ];
then
	echo "Illegal number of args, and script needs to be run with super user permissions"
	exit
fi

g++ global.c -lX11 -o global

echo $2


sed "s|replaceme|$1|" quick-color > "$2"

chmod +x "$2"

mv "$2" /usr/bin

echo $2 > command_name.txt

