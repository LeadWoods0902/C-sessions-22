#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include "randomArrayInput.h"
int main()
{
    int* arr1;
    int lengthArr1, submitVal;
    int i;
    /*
     * arr1: pointer to start of array
     * lengthArr1: size of arr1 to be allocated
     * submitVal: the variable you should store your answer in
     * i: iterator for a loop.
     * minInt: the smallest possible integer (the numbers generated WILL be distinctly less than this)
     */

    lengthArr1 = genLength();


    // Task 1 | replace the $---$ in the below statement to allocate enough memory for "lengtharr1" number of ints

    arr1 = malloc(sizeof ($---$) * $---$);

    //End of Task 1

    populateArrayRandomly(arr1, lengthArr1); //randomly populates the given array

    // Task 2 | replace the $---$ in the below code to create a loop that goes through the elements in the array and finds the largest
    
    submitVal = 0;
    for(i = 0; i < $---$ ; i++){
        printf("%d: %d\n", i, arr1[i]);
        if(arr1[i] > $---$)
           submitVal = $---$;
    }
    
    //End of Task 2

    verifyLargestNumber(arr1, lengthArr1, submitVal);

    return 0;
}