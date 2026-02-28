#include<stdio.h>
int main()
{
    int salary,experience,bonus;
    scanf("%d",&experience);
    scanf("%d",&salary);
    if(experience>=10){
        bonus=salary*0.20;
        printf("Bonus:%d\n",bonus);
    }
    else if(experience>5 && experience<9){
        bonus=salary*0.10;
        printf("Bonus:%d\n",bonus);
    }
    else if(experience<5){
        printf("No bonus");
    }
    return 0;
    
}