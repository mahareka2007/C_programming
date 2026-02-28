#include <stdio.h>
int main() {
    int hours;
    char gender;
    float salary;

    printf("Enter gender (M/F): ");
    scanf(" %c",&gender);
    printf("Enter hours worked: ");
    scanf("%d",&hours);

    if(hours <= 8) {
        if(gender=='M' || gender=='m')
            salary = hours * 80;
        else
            salary = hours * 60;
    } else {
        salary = 8 * (gender=='M'||gender=='m' ? 80 : 60);
        salary += (hours - 8) * 100;
    }

    printf("Salary = %.2f", salary);
    return 0;
}