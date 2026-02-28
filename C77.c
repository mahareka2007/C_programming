#include <stdio.h>
int main() {
    int symptoms;
    printf("Enter number of symptoms: ");
    scanf("%d", &symptoms);

    if(symptoms < 0) {
        printf("Invalid input");
    }
    else if(symptoms >= 5) {
        printf("High priority - Critical condition");
    }
    else if(symptoms >= 3) {
        printf("Medium priority - Moderate condition");
    }
    else {
        printf("Low priority - Stable condition");
    }
    return 0;
}