#include <stdio.h>

int main() {
    int choice;
    float c, f;

    printf("Temperature Conversion Menu:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &c);
            f = (c * 9 / 5) + 32;
            printf("\n\t%.2f Celsius = %.2f Fahrenheit\n", c, f);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &f);
            c = (f - 32) * 5 / 9;
            printf("\n\t%.2f Fahrenheit = %.2f Celsius\n", f, c);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
