#include <stdio.h>

int main() {
    float distance, time, speed;

    printf("Enter distance (km): ");
    scanf("%f", &distance);
    printf("Enter time (hours): ");
    scanf("%f", &time);

    if (time <= 0 || distance < 0)
        printf("Invalid input! Time must be > 0.\n");
    else {
        speed = distance / time;
        printf("Average Speed: %.2f km/h\n", speed);
    }
    return 0;
}
