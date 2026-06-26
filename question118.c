#include <stdio.h>
#include <string.h>

#define MAX 50
#define TITLE_LEN 50
#define AUTHOR_LEN 50

int main() {
    int n, i;
    int bookID[MAX];
    char title[MAX][TITLE_LEN];
    char author[MAX][AUTHOR_LEN];

    printf("How many books? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Book ID: ");
        scanf("%d", &bookID[i]);
        printf("Enter Title: ");
        scanf(" %[^\n]", title[i]);   
        printf("Enter Author: ");
        scanf(" %[^\n]", author[i]);
    }

    printf("\n--- Library Records ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d | Title: %s | Author: %s\n",
               bookID[i], title[i], author[i]);
    }

    return 0;
}
