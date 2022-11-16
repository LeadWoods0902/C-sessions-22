/*
 *	Created by Louis Edwards on 2022-11-16
 */
#include <stdio.h>
#include <string.h>

int main() {
  struct Human {
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
  strcpy(h2.firstName, "Cerys");
  strcpy(h2.lastName, "Ormrod");

  printf("%s is older\n", h1.age > h2.age ? h1.firstName : h2.firstName);
  
  return 0;
}
