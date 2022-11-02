/*
* Created by Leadwoods and Viren Vadhvana on 2022-10-31.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    /* TASK 2
     1)     Calculate the length of a string using pointer incrementation

     ext1)  convert the code to take user input, store it in an array of length 128.
            expectation: single non-spaced string ie: "Hello" or "sdfkgbkhsdjfgjsabfg"

            For extension solution, uncomment the commented out lines of code
     */


    char* arr1 = "Hello";
    /*char arr1[128];*/

    char* arr1PTR = arr1;
    int arr1Length = 0;

/*    printf("Input a string:");
    scanf("%s", arr1);*/

    while(*arr1PTR != '\0'){
        arr1Length++;
        arr1PTR++;
    }

    printf("The string you entered was %s and it was %d characters long\n", arr1, arr1Length);



return 0;
}
