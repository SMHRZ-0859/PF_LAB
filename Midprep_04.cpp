#include <stdio.h>

int main() {
    float expense[7], total = 0, avg;
    int i, zero = 0;

    printf("Enter expenses for 7 days:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &expense[i]);
        if (expense[i] == 0)
            zero = 1;
        total += expense[i];
    }

    avg = total / 7;

    printf("\nTotal Expense: Rs. %.2f\n", total);
    printf("Average Expense: Rs. %.2f\n", avg);

    if (zero)
        printf("Warning: Some days have 0 expense!\n");

    if (avg < 500)
        printf("Budget friendly\n");
    else
        printf("Overspending\n");

    return 0;
}
