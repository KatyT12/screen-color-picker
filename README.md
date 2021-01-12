This is a simple program which will get the color the mouse is currently at and copy that color(in hexadecimal) to the clipboard. There is currently a decent color picker application for Linux such as Gcolor but this is just a program that will get the color your mouse is at on the screen and copy it to clipboard. I wanted a simple program like this because I don't always want to launch a whole gui just to pick out a color on the screen so this is made to be ran by a keyboard shortcut (which it does not configure itself you would have to add that yourself in your window manager settings).

## Build and run (Linux)

Make sure you install the necessary dependancies of the program which includes
. xclip
. x11 headers (libx11-dev if you are on something Ubuntu based)

and other dependancies it may need 


install.sh copies other the python file quick-color to /usr/bin. It takes two parameters, the first being the location of global. If you move this program you will have to edit the python file to have the right
location. The second parameter is what you want the command to be called so when you run it in terminal (or as a keyboard binding where it is more useful)

`
$ sudo install.sh $(pwd) ${name_of_command}
`

Note that name_of_command is whatever you want it to be called and if you plan on moving the executable 'global' (compiled from global.c by install.sh) then you should put the directory that you plan to move
it to as the first parameter rather than $(pwd)



If you just want to run the the program and not put it in /usr/bin

. edit the file quick-color on line 41. replace  'replaceme' with the path to the current directory
. g++ global.c -lX11 -o global
. python quick-color 
Now if you paste then hopefully you paste out the color that your cursor was over
