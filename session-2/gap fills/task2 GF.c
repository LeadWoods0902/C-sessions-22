/*
 *	Created by Louis Edwards on 2022-11-16
 */
#include <stdio.h>
#include <string.h>

int main() {
        /*
    *   Task1 : Create a structure for Human with variables:
    *       - age 
    *       - firstName
    *       - lastName
    *   Task2 : Compare the two names and print out the name of the older person
    */
    struct Human {
        int $---$;
        char firstName[32];
        char lastName[32];
    };

    struct Human h1;
    struct $---$ h2;

    h1.age = 19;
    strcpy(h1.$---$, "Louis");
    strcpy(h1.lastName, "Edwards");

    h2.age = $---$;
    strcpy(h2.firstName, "Cerys");
    strcpy(h2.lastName, "Ormrod");

    printf("%s is older", h1.age > h2.$---$ ? h1.firstName : h2.$---$);
}