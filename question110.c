#include <stdio.h>

struct Account {
    int acc_no;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;

    printf("Enter Account Number: ");
    scanf("%d", &acc.acc_no);

    printf("Enter Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    printf("\n--- Account Details ---\n");
    printf("Account No: %d\n", acc.acc_no);
    printf("Name: %s\n", acc.name);
    printf("Balance: %.2f\n", acc.balance);

    return 0;
}
