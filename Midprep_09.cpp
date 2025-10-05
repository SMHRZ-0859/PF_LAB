#include <stdio.h>

int main() {
    float deposit, interestRate, interest, total;

    printf("Enter deposit amount: ");
    scanf("%f", &deposit);

    if (deposit <= 0)
        printf("Invalid deposit amount!\n");
    else {
        if (deposit < 2000)
            interestRate = 3;
        else if (deposit <= 10000)
            interestRate = 5;
        else
            interestRate = 8;

        interest = (deposit * interestRate) / 100;
        total = deposit + interest;

        printf("Interest Rate: %.2f%%\n", interestRate);
        printf("Interest Earned: Rs. %.2f\n", interest);
        printf("Total Balance: Rs. %.2f\n", total);
    }
    return 0;
}
