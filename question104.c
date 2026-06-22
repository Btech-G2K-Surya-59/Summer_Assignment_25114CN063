#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("📚 Simple Quiz Application\n\n");

    
    printf("Q1: 2 + 2 = ?\n");
    printf("1. 3\n2. 4\n3. 5\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    
    printf("Q2: Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");
    scanf("%d", &answer);
    if (answer == 1) score++;

    
    printf("\n🎯 Your score = %d/2\n", score);

    return 0;
}
