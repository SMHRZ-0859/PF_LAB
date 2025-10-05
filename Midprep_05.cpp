#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days <= 0)
        printf("Invalid input!\n");
    else {
        if (days <= 5)
            fine = days * 2;
        else if (days <= 10)
            fine = days * 3;
        else
            fine = days * 5;

        printf("Total Fine: Rs. %.2f\n", fine);
    }
    return 0;
}
