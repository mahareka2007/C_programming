#include <stdio.h>
int main() {
    int d;
    printf("Enter number (1-7): ");
    scanf("%d",&d);

    switch(d) {
        case 1: printf("Monday - Weekday"); break;
        case 2: printf("Tuesday - Weekday"); break;
        case 3: printf("Wednesday - Weekday"); break;
        case 4: printf("Thursday - Weekday"); break;
        case 5: printf("Friday - Weekday"); break;
        case 6: printf("Saturday - Holiday"); break;
        case 7: printf("Sunday - Holiday"); break;
        default: printf("Invalid");
    }
    return 0;
}