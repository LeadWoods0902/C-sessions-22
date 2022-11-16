/*
* Created by leadwoods on 11/14/22.
*/

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include "randomArrayInput.h"
int main()
{
    int lengtharr1, submitVal;
    int* arr1;
    lengthArr1 = genLength(); /*    generates a random length for the array */

    /*  Task 1 | assign enough memory to arr1 to handle the random length stored in lengthArr1  */



    /*  End of Task 1   */

    populateArrayRandomly(arr1, lengthArr1); /* randomly populates the given array  */

    /*  Task 2 | find the largest value in the array    */



    /*  End of Task 2   */

    verifyLargestNumber(arr1, lengthArr1, submitVal);

    return 0;
}