#include <unistd.h>     // pause
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

#include <xcb/xcb.h>

int main(){
    // open connection to the x server
    xcb_connection_t *connection = xcb_connect(NULL, NULL);
    //printf("connection = %"PRIu32"\n", connection);
    //printf("connection = %x\n", *connection);

    // get the first screen
    const xcb_setup_t       *setup  = xcb_get_setup(connection);
    xcb_screen_iterator_t   iter    = xcb_setup_roots_iterator(setup);
    xcb_screen_t            *screen = iter.data;

    // create the window
    xcb_window_t window = xcb_generate_id(connection);
    
    printf("window = %d\n", window); 

    xcb_create_window ( connection,
                        XCB_COPY_FROM_PARENT,
                        window,
                        screen->root,
                        0, 0,
                        150, 150,
                        10,
                        XCB_WINDOW_CLASS_INPUT_OUTPUT,
                        screen->root_visual,
                        0, NULL );

    // map the window on the screen
    xcb_map_window (connection, window);

    xcb_flush (connection);
    pause ();
    xcb_disconnect (connection);


    return 0;
}



