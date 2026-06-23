#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float sub1, sub2, sub3, total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter marks in Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks in Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks in Subject 3: ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    percentage = total / 3;

    printf("\n--- Marksheet ---\n");
    printf("Roll No     : %d\n", rollNo);
    printf("Name        : %s\n", name);
    printf("Subject 1   : %.2f\n", sub1);
    printf("Subject 2   : %.2f\n", sub2);
    printf("Subject 3   : %.2f\n", sub3);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    return 0;
}
