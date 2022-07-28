// POINTER INTRO

#include <stdio.h>

// memory addresses:

/**     address      value
 *      --------    -------
 *      0xa0        'a'
 *      0xa1        'b' 
 *      0xa2        1
 *      0xa3        4
 *      .
 *      .
 *      .
 *      0xaf        0
 *      0xb0        0
 *   
 * 
 */


void main(){
    int a = 10;


    int *ptr_to_a = &a;

    printf("ptr_to_a: %p\n", (void *)ptr_to_a);
}