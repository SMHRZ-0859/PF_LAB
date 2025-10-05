#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;

    printf("Cafeteria Menu:\n1. Tea (Rs.50)\n2. Burger (Rs.150)\n3. Pizza (Rs.300)\n4. Sandwich (Rs.100)");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter quantity: ");
    scanf("%d", &qty);

    if (qty <= 0) {
        printf("Invalid quantity!\n");
        return 0;
    }

    switch (choice) {
        case 1: total = 50 * qty; break;
        case 2: total = 150 * qty; break;
        case 3: total = 300 * qty; break;
        case 4: total = 100 * qty; break;
        default: printf("Invalid choice!\n"); return 0;
    }

    printf("Total Bill: Rs. %.2f\n", total);
    return 0;
}
