#include <stdio.h>
int main() {
    int m;
    printf("Enter month (1-12): ");
    scanf("%d",&m);

    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        printf("31 days\n");
    else if(m==4||m==6||m==9||m==11)
        printf("30 days\n");
    else if(m==2)
        printf("28 or 29 days\n");
    else {
        printf("Invalid month");
        return 0;
    }

    if(m>=1 && m<=3) printf("Q1");
    else if(m<=6) printf("Q2");
    else if(m<=9) printf("Q3");
    else printf("Q4");

    return 0;
}