/*
 Created by Leadwoods and Viren Vadhvana on 2022-10-31.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /* TASK 1
    1) Print the value of var1
    2) Print the address of var1
    3) Create an integer pointer variable var2
    4) Set the value of var2 equal to the value of var1
    5) Print the address of the pointer variable *var2
    6) Print the integer value of var2
    */

    int var1 = 5;
    int* var2;

    printf("The value of var1 is %d\n", var1);

    printf("The address of var1 is %p\n", (void *) &var1);

    var2 = &var1;

    printf("The address of the pointer variable *var2 is %p\n", (void *) var2);

    printf("The value of var2 is %d\n", *var2);

    return 0;
}
