#include<stdio.h>
int main()
{
    int day=5;
    switch (day)
    {
        case 0:
        case 1:
        case 2:
        case 3:
	    printf("Marvalous morning to all");
            break;
        case 4:
            printf("Fantastic morning to all");
            break;
        case 5:
            printf("Spiritful morning to all");
            break;
        default:
            printf("Invalid statement");
    }
    return 0;

}
