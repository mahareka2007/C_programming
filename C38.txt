#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age < 0)
        printf("Invalid age");
    else if(age <= 5)
        printf("Mashed vegetables / soft fruits");
    else if(age <= 12)
        printf("Milk and fruits");
    else if(age <= 18)
        printf("Burgers / pasta");
    else if(age <= 50)
        printf("Balanced diet");
    else
        printf("Soup / grilled fish");

    return 0;
}