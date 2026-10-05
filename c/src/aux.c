/* @author bcsarah@aux.c
 *
 * this file contains the auxiliary functions for the program,
 * such as clean_line, etc.
 */

#include <stdio.h>


/* == [ AUX ] == */
void clean_line(void)
{
    printf("\33[2K\r");
}
