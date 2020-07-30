#include <stdio.h>
#include <stdlib.h>

int main() {
    char grade = 'C';

    switch(grade) {
        case 'A' :
            printf("you did great");
            break;
        case 'B' :
            printf("you did good");
            break;
        case 'C' :
            printf("you did poorly");
            break;
        case 'D' :
            printf("you did bad");
            break;
        default :
            printf("Invalid grade");
    }

    return 0;
}
