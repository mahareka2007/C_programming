#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);

    int r = sqrt(n);

    if (r * r == n)
        printf("Perfect Square");
    else
        printf("Not Perfect Square");

    return 0;
}