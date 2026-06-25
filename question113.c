#include <stdio.h>

int main() {
    int choice;
    int a, b;

    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice) {
            case 1: printf("Result = %d\n", a + b); break;
            case 2: printf("Result = %d\n", a - b); break;
            case 3: printf("Result = %d\n", a * b); break;
            case 4: 
                if (b != 0)
                    printf("Result = %d\n", a / b);
                else
                    printf("Error! Division by zero.\n");
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
