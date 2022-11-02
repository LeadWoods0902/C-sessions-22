//
// Created by Leadwoods and Viren Vadhvana on 2022-10-31.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    /* TASK 3
     1) Using pointers, print an array character by character to the console
     2) Print the same array but in reverse

     ext1)  Print the array in ascending order
     ext2)  Convert the code to take user input. expectation: single integers one after the other
     ext3)  Only allow the user to enter up to 25 characters


            where you see $---$ there is an element that must be filled in to complete the line of code
     */


    int arr2[10] = {7, 14, 1, 6, 8, 3, 66, 3, 9, 11};
    int* arr2PTr = $---$;
    int intCount = $---$, i;

    printf("The array forward is: ");
    for(i = 0; i < $---$ ; i++){
        printf("%d ", *($---$ ++));
    }

    printf("\nAnd in reverse: ");
    for(i = intCount; i >0 ; i--){
        printf( "$---$ ", *($---$));
    }


    return 0;
}
