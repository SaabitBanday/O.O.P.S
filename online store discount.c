#include <stdio.h>

int main() {
    float amount, discount = 0, finalAmount;
    printf("Enter total purchase amount: ");
    scanf("%f", &amount);

    if (amount > 5000)
        discount = amount * 0.20;
    else if (amount >= 2000)
        discount = amount * 0.10;

    finalAmount = amount - discount;

    printf("Original Amount = ₹%.2f\n", amount);
    printf("Discount = ₹%.2f\n", discount);
    printf("Final Amount to Pay = ₹%.2f\n", finalAmount);

    return 0;
}
