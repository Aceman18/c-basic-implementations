#include <stdio.h>
#include <stdlib.h>


int main() {

    char characterName[] = "John";
    int characterAge = 35;

    printf("My name is %s I am %i years old\n", characterName, characterAge);
    characterAge = 40;
    printf("but i really am %i years old\n", characterAge);

    return 0;
}