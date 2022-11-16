/*
* Created by leadwoods on 11/14/22.
*/

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include "randomArrayInput.h"
int main()
{
    int* arr1;
    int lengthArr1, submitVal;
    int i, minInt = INT_MIN;
    /* int temp; */
    /*
     *  arr1:       pointer to start of array
     *  lengthArr1: size of arr1 to be allocated
     *  submitVal:  the variable you should store your answer in
     *  i:          iterator for a loop.
     *  minInt:     the smallest possible integer (the numbers generated WILL be distinctly less than this)
     */

    lengthArr1 = genLength(); /*    generates a random length for the array */



    /*  Task 1 | assign enough memory to arr1 to handle the random length stored in lengthArr1  */


    /*  End of Task 1   */

    populateArrayRandomly(arr1, lengthArr1); /* randomly populates the given array  */

    /*  Task 2 | find the largest value in the array
    *   suggestion: Print out every number as you test it
    */

    /*  End of Task 2   */

    verifyLargestNumber(arr1, lengthArr1, submitVal);

    return 0;
}