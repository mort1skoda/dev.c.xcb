#include <stdio.h>
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include <xcb/xcb.h>
#include <inttypes.h>

// Morten Håkestad 2023-01-15 15:15 - Sunday

int main(){
    printf("/dat.mnt/dev.c/dev.c.demo/0templeate/main.c\n");
    printf("in f int main()\n");
    int ret;
    ret = 0;
    ret = func1(3, 6);
    printf("func1 returned: %d \n", ret);
    ret = func2(1,2,3);
    printf("func2 returned: %d \n", ret);
    ret = func3(5);
    printf("func3 returned: %d \n", ret);

    typedef int* int_p;
    int a = 0;
    a++;

    int_p  p_a = &a;

    *p_a = 5;

// XCB --------------------



    /* Open the connection to the X server. Use the DISPLAY environment variables */

    int i, screenNum;
    xcb_connection_t *connection = xcb_connect(NULL, &screenNum);


    /* Get the screen whose number is screenNum */

    const xcb_setup_t *setup = xcb_get_setup(connection);
    xcb_screen_iterator_t iter = xcb_setup_roots_iterator (setup);

    // we want the screen at index screenNum of the iterator
    for(i = 0; i < screenNum; ++i) {
        xcb_screen_next (&iter);
    }

    xcb_screen_t *screen =iter.data;

    /* report */

    printf("\n");
    printf(" Information of screen %"PRIu32"\n", screen->root);
    printf("  Width........: %"PRIu16"\n", screen->width_in_pixels);
    printf("  Height.......: %"PRIu16"\n", screen->height_in_pixels);
    printf("  White pixel..: %"PRIu32"\n", screen->white_pixel);
    printf("  Black pixel..: %"PRIu32"\n", screen->black_pixel);
    printf("\n");

    return 0;
}



