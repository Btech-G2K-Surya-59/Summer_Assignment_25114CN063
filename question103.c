#include <stdio.h>

int main() {
    int choice;
    float balance = 1000;  
    float amount;

    printf("🏦 Simple ATM Simulation\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("💰 Balance = %.2f\n", balance);
    }
    else if (choice == 2) {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        balance += amount;
        printf("✅ New Balance = %.2f\n", balance);
    }
    else if (choice == 3) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount <= balance) {
            balance -= amount;
            printf("✅ New Balance = %.2f\n", balance);
        } else {
            printf("❌ Not enough balance!\n");
        }
    }
    else {
        printf("⚠️ Invalid choice.\n");
    }

    return 0;
}
