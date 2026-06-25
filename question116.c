#include <stdio.h>

struct Item {
    int id;
    char name[20];
    int qty;
};

int main() {
    struct Item items[50];
    int count = 0, choice, i;

    do {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Item\n");
        printf("2. Show Items\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Add
                printf("Enter ID: ");
                scanf("%d", &items[count].id);
                printf("Enter Name: ");
                scanf("%s", items[count].name);
                printf("Enter Quantity: ");
                scanf("%d", &items[count].qty);
                count++;
                printf("Item added!\n");
                break;

            case 2: 
                if (count == 0)
                    printf("No items.\n");
                else {
                    printf("\nInventory:\n");
                    for (i = 0; i < count; i++) {
                        printf("ID:%d Name:%s Qty:%d\n",
                               items[i].id, items[i].name, items[i].qty);
                    }
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
