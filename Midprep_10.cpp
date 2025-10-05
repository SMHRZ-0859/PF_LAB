#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (m): ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0)
        printf("Invalid input!\n");
    else {
        bmi = weight / (height * height);
        printf("Your BMI: %.2f\n", bmi);

        if (bmi < 18.5)
            printf("Category: Underweight\n");
        else if (bmi < 25)
            printf("Category: Normal\n");
        else if (bmi < 30)
            printf("Category: Overweight\n");
        else
            printf("Category: Obese\n");
    }
    return 0;
}
