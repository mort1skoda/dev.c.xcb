## xcb tutorial
### freedesktop



#### xcb homepage

    https://xcb.freedesktop.org
   [xcb-home](https://xcb.freedesktop.org)


#### xcb tutorial

    https://xcb.freedesktop
   [xcb tutorial](https://xcb.freedesktop)


#### Outline of a GUI program

  1 Perform initialization routines.
  2 Connect to the X server.
  3 Perform X-related initialization.
  4 While not finished:
      1 Receive the next event from the X server.
      2 Handle the event, possibly sending various drawing requests to the X server.
      3 If the event was a quit message, exit the loop.
  5 Close down the connection to the X server.
  6 Perform cleanup operations.


#### Compiling xcb programs

requires linking them with the XCB library. This is easily done thanks to pkgconfig:

gcc -Wall prog.c -o prog `pkg-config --cflags --libs xcb`

or simply :

gcc -Wall prog.c -o prog -lxcb



