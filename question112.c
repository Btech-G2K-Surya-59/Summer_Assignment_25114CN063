#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c;

    printf("Enter Name: ");
    scanf(" %[^\n]", c.name);

    printf("Enter Phone Number: ");
    scanf(" %[^\n]", c.phone);

    printf("\n--- Contact Details ---\n");
    printf("Name: %s\n", c.name);
    printf("Phone: %s\n", c.phone);

    return 0;
}
