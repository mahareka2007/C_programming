#include<stdio.h>
int main()
{
    int units,total_bill;
    scanf("%d",&units);
    if(units<=100){
        total_bill=units*1.5;
        printf("%d",total_bill);
    }
    else if(101<=units && units<200){
        total_bill=units*2.5;
        printf("%d",total_bill);
    }
    else{
       total_bill=units*3.5;
       printf("%d",total_bill); 
    }
    return 0;
}