#include <stdio.h>
#include <stdlib.h>

int main() {

    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter a celebrity: ");
    fgets(celebrity, 20, stdin); // stdin = standard input (using console)
    printf("Enter a color: ");
    scanf ("%s", color);
    printf("Enter a pluralNoun: ");
    scanf ("%s", pluralNoun);

    printf("Roses are %s\n", color);
    printf("%s are blue \n", pluralNoun);
    printf("I love %s \n", celebrity);

    return 0;
}