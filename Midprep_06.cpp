#include <stdio.h>

int main() {
    float principal, rate, interest;
    int years, i;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter number of years: ");
    scanf("%d", &years);

    if (principal <= 0 || rate <= 0 || years <= 0)
        printf("Invalid input!\n");
    else {
        printf("\nYear\tSimple Interest\n");
        printf("--------------------------\n");
        for (i = 1; i <= years; i++) {
            interest = (principal * rate * i) / 100;
            printf("%d\t%.2f\n", i, interest);
        }
    }
    return 0;
}
