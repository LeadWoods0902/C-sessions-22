#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include "randomArrayInput.h"
int main()
{
    int* arr1;
    int lengthArr1, submitVal;
    int i, minInt = INT_MIN;
    /*
     * arr1: pointer to start of array
     * lengthArr1: size of arr1 to be allocated
     * submitVal: the variable you should store your answer in
     * i: iterator for a loop.
     * minInt: the smallest possible integer (the numbers generated WILL be distinctly less than this)
     */

    lengthArr1 = genLength();


    // Task 1 | assign enough memory to arr1 to handle the random length stored in lengthArr1

    arr1 = malloc(sizeof (int) * lengthArr1);

    //End of Task 1

    populateArrayRandomly(arr1, lengthArr1); //randomly populates the given array

    // Task 2 | find the largest value in the array
    // suggestion: Print out every number as you test it
    submitVal = minInt;
    for(i = 0; i < lengthArr1 ; i++){
        printf("%d: %d\n", i, arr1[i]);
        if(arr1[i] > submitVal)
           submitVal = arr1[i];
    }
    //End of Task 2

    verifyLargestNumber(arr1, lengthArr1, submitVal);

    return 0;
}