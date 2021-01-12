#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

int main (){
    Display *display = XOpenDisplay(NULL);
    XEvent event;
    XQueryPointer(display, XDefaultRootWindow(display),
        &event.xbutton.root, &event.xbutton.window,
        &event.xbutton.x_root, &event.xbutton.y_root,
        &event.xbutton.x, &event.xbutton.y,
        &event.xbutton.state);
    printf("%d %d\n", event.xbutton.x_root, event.xbutton.y_root);
    XCloseDisplay(display);
    return 0;
}
