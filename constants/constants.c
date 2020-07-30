#include <stdio.h>
#include <stdlib.h>

int main() {

    // Constants are variables that cannot be modified or changed (people use all caps for constant names, so it is noticeable)
    const int NUM = 5;

    // NUM = 2; This causes an error as there is an attempt to change the constant

    printf("%i \n", NUM);

    return 0;
}