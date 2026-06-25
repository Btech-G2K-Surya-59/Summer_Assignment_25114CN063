#include <stdio.h>

int main() {
    int arr[50], n = 0, choice, i, val;

    do {
        printf("\n--- Array Menu ---\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                if (n < 50) {
                    printf("Enter element: ");
                    scanf("%d", &val);
                    arr[n] = val;
                    n++;
                    printf("Inserted.\n");
                } else {
                    printf("Array full!\n");
                }
                break;

            case 2: 
                if (n > 0) {
                    printf("Array: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Array empty!\n");
                }
                break;

            case 3: 
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 3);

    return 0;
}
