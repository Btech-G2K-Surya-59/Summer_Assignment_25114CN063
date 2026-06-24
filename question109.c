#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book library[100];
    int count = 0, choice;

    do {
        printf("\n--- Library Menu ---\n");
        printf("1. Add Book\n");
        printf("2. Show Books\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &library[count].id);
            printf("Enter Book Title: ");
            scanf(" %[^\n]", library[count].title);
            printf("Enter Author Name: ");
            scanf(" %[^\n]", library[count].author);
            count++;
            printf("Book added!\n");
        }
        else if (choice == 2) {
            printf("\n--- Books in Library ---\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d | Title: %s | Author: %s\n",
                       library[i].id, library[i].title, library[i].author);
            }
            if (count == 0) {
                printf("No books yet.\n");
            }
        }
    } while (choice != 3);

    return 0;
}
