#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=b){
        if(b<=a){
            printf("Valid Statement");
        }
    }
    else if(c>=d){
        if(d<=c){
            printf("True Statement");
        }
    }
    else{
        printf("Invalid Statement");
    }
}