#include <stdio.h>

int main() {
    float units, bill = 0;
    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units < 0)
        printf("Invalid input! Units cannot be negative.\n");
    else {
        if (units < 100)
            bill = units * 5;
        else if (units <= 300)
            bill = units * 7;
        else
            bill = units * 10;

        printf("Total Electricity Bill: Rs. %.2f\n", bill);
    }
    return 0;
}
