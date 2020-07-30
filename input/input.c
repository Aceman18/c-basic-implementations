#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    char name[20];
    // printf("Enter your age: ");
    // scanf("%d", &age); // Use this for user input | scanf stops when it hits the first space so not the best for strings
    printf("Enter your name: ");
    fgets(name, 20, stdin); // stdin = standard input (using console)
    printf("Your age is: %d \n", age);
    printf("Your name is: %s \n", name);

    return 0;
}