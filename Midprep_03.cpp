#include <stdio.h>

int main() {
    float marks[5], total, percentage;
    char grade;
    int i;

    printf("Enter marks for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    printf("\nStudent\tTotal\tPercentage\tGrade\n");
    printf("-----------------------------------------\n");

    for (i = 0; i < 5; i++) {
        total = marks[i];
        percentage = (total / 100) * 100; // assuming out of 100
        if (percentage >= 80) grade = 'A';
        else if (percentage >= 60) grade = 'B';
        else if (percentage >= 40) grade = 'C';
        else grade = 'F';

        printf("%d\t%.2f\t%.2f%%\t\t%c\n", i + 1, total, percentage, grade);
    }
    return 0;
}
