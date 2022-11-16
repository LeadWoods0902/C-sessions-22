/*
* Created by leadwoods on 11/14/22.
*/

#ifndef MENTOR_C_2_RANDOMARRAYINPUT_H
#define MENTOR_C_2_RANDOMARRAYINPUT_H

#include <time.h>

int genLength(){
    srand((unsigned int)time(NULL));
    return (rand() % 91 + 10);
}

void populateArrayRandomly(int* array, int length){
    int i;
    for(i=0; i< length; i++){
        array[i] = rand() % 99;
    }
}

void verifyLargestNumber(int* array, int length, int testVal){
    int i, valFound = 0, response = -2;
    for(i=0;i<length;i++)
    {
        if(*array<*(array+i)) {
            if (*array == testVal)
                valFound = 1;
            *array = *(array + i);
        }
    }
    if(valFound == 0){
        response = -1;
    }
    if(testVal == *array){
        response =  0;
    }

    if(testVal < *array){
        response = 1;
    }


    switch(response) {
        case -1:
            printf("the value you entered (%d) is not in the original set\n", testVal);
            break;
        case 0:
            printf("the value you entered (%d) is correct\n", testVal);
            break;
        case 1:
            printf("the value you entered (%d) is smaller than the correct answer (%d)\n", testVal, *array);
            break;
        default:
            printf("Your submitted value (%d) broke my logic - please do tell me :)\n", testVal);
            break;
    }
}

#endif
