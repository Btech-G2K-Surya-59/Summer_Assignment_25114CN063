#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                printf("Length = %d\n", (int)strlen(str));
                break;

            case 2: 
                strcpy(str2, str);
                printf("Copied string = %s\n", str2);
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
