#include <stdio.h>

struct Salary {
    int empId;
    char name[50];
    float basicPay;
    float gross;
};

int main() {
    struct Salary s;

    printf("Enter Employee ID: ");
    scanf("%d", &s.empId);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Basic Pay: ");
    scanf("%f", &s.basicPay);

    
    s.gross = s.basicPay;

    printf("\n--- Salary Record ---\n");
    printf("Employee ID : %d\n", s.empId);
    printf("Name        : %s\n", s.name);
    printf("Basic Pay   : %.2f\n", s.basicPay);
    printf("Gross Salary: %.2f\n", s.gross);

    return 0;
}
