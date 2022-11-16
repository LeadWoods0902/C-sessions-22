/*
* Created by Leadwoods and Viren Vadhvana on 2022-10-31.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /* TASK 3
     1) Using pointers, print an array character by character to the console
     2) Print the same array but in reverse

     ext1)  Print the array in ascending order
     ext2)  Convert the code to take user input. expectation: single integers one after the other
     ext3)  Only allow the user to enter up to 25 characters

            For extension solution, uncomment the commented out lines of code
     */

    int arr2[10] = {7, 14, 1, 6, 8, 3, 66, 3, 9, 11};
    /*int* arr2;*/
    int* arr2PTR;
    int intCount = 10, i;
    /*int x, y, temp;*/


   /*printf("Input the number of elements to store in the array:");
   scanf("%d", &intCount);
   while (intCount > 25) {
       printf("The number you entered is greater than 25, try again :(\n");
       scanf("%d", &intCount);
   }
   arr2 = malloc(sizeof (int) * (intCount));
   arr2PTR = arr2;

   printf("Input %d integer values:\n",intCount);
   for(i=0;i<intCount;i++)
   {
       scanf("%d", &arr2PTR[i]);
   }*/

   arr2PTR = arr2;

    printf("The array forward is: ");
    for(i = 0; i < intCount ; i++){
        printf("%d ", *(arr2PTR++));
    }

    printf("\nAnd in reverse: ");
    for(i = intCount; i >0 ; i--){
        printf( "%d ", *(--arr2PTR));
    }

    /*printf("The array in ascending order is: ");
    for (x = 0; x < intCount; x++) {

        for (y = x + 1; y < intCount; y++) {

            if (*(arr2PTR + y) < *(arr2PTR + x)) {
                temp = *(arr2PTR + x);
                *(arr2PTR + x) = *(arr2PTR + y);
                *(arr2PTR + y) = temp;
            }
        }
    }
    arr2PTR = arr2;
    for(i = 0; i < intCount ; i++){
        printf("%d ", *arr2PTR++);
    }


    free(arr2PTR);*/

    return 0;
}
