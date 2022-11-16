
#include <stdio.h>
#include <string.h>
int main(){
    struct Human{
        int age;
        char firstName[32];
        char lastName[32];
    };

    struct Human h1;
    struct Human h2;

    h1.age = 19;
    strcpy(h1.firstName, "Louis");
    strcpy(h1.lastName, "Edwards");

    h2.age = 21;
    strcpy(h1.firstName, "Cerys");
    strcpy(h1.lastName, "Ormrod");

    printf("%s is older", h1.age > h2.age?h1.firstName:h2.firstName);
}