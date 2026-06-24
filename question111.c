#include <stdio.h>

struct Ticket {
    int ticket_no;
    char name[50];
    char movie[50];
};

int main() {
    struct Ticket t;

    printf("Enter Your Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Movie Name: ");
    scanf(" %[^\n]", t.movie);

    t.ticket_no = 1; 

    printf("\n--- Ticket Details ---\n");
    printf("Ticket No: %d\n", t.ticket_no);
    printf("Name: %s\n", t.name);
    printf("Movie: %s\n", t.movie);

    return 0;
}
