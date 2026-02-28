
#include<stdio.h>
int main()
{
    int electricity;
    scanf("%d",&electricity);
    if(electricity<=100){
        printf("LOW");
    }
    else if(101<electricity && electricity<300){
        printf("MEDIUM");
    }
    
    else if(electricity>300){
        printf("HIGH");
    }
    else{
        printf("Invalid variable");
    }
    return 0;
}
