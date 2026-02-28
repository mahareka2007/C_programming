#include <stdio.h>
int main() {
    float investment, buyPrice, currentPrice, shares;
    float profitLoss;

    printf("Enter investment amount: ");
    scanf("%f", &investment);

    printf("Enter purchase price per share: ");
    scanf("%f", &buyPrice);

    printf("Enter current price per share: ");
    scanf("%f", &currentPrice);

    shares = investment / buyPrice;
    profitLoss = shares * (currentPrice - buyPrice);

    if(profitLoss > 0)
        printf("Profit = %.2f", profitLoss);
    else if(profitLoss < 0)
        printf("Loss = %.2f", profitLoss);
    else
        printf("No profit no loss");

    return 0;
}