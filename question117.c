#include <stdio.h>
#include <string.h>

#define MAX 50   
#define NAME_LEN 50

int rollNo[MAX];
char name[MAX][NAME_LEN];
float marks[MAX];
int count = 0;   

int main() {
    int n, i;

    printf("How many students? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &rollNo[i]);
        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);   
        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
        count++;
    }

    printf("\n--- Student Records ---\n");
    for (i = 0; i < count; i++) {
        printf("Roll No: %d | Name: %s | Marks: %.2f\n",
               rollNo[i], name[i], marks[i]);
    }

    return 0;
}
