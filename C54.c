#include <stdio.h>
int main() {
    float p,c,b,m,cs,avg;
    printf("Enter marks of 5 subjects: ");
    scanf("%f%f%f%f%f",&p,&c,&b,&m,&cs);

    avg = (p+c+b+m+cs)/5;
    printf("Average = %.2f\n", avg);

    if(avg >= 90) printf("Grade A");
    else if(avg >= 80) printf("Grade B");
    else if(avg >= 70) printf("Grade C");
    else if(avg >= 60) printf("Grade D");
    else if(avg >= 50) printf("Grade E");
    else printf("Grade F");

    return 0;
}