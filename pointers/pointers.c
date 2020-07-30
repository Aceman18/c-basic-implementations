#include <stdio.h>
#include <stdlib.h>

int main() {

    int age = 30;
    int * pAge = &age;

    printf("Age: %p \n", pAge);

    printf("Age: %d", *pAge);

    return 0;
}
