#include <stdio.h>
int main() {
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Agent A Highest Priority");
    else if (b >= a && b >= c)
        printf("Agent B Highest Priority");
    else
        printf("Agent C Highest Priority");

    return 0;
}