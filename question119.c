#include <stdio.h>
#include <string.h>

#define MAX 50
#define NAME_LEN 50

int main() {
    int n, i;
    int empID[MAX];
    char name[MAX][NAME_LEN];
    float salary[MAX];

    printf("How many employees? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Employee ID: ");
        scanf("%d", &empID[i]);
        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);   
        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\n--- Employee Records ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Salary: %.2f\n",
               empID[i], name[i], salary[i]);
    }

    return 0;
}
