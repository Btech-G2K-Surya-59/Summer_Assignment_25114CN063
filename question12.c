#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // The LCM must be at least as large as the bigger number
    max = (num1 > num2) ? num1 : num2;

    // Loop until we find a number divisible by both num1 and num2
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("The LCM is %d\n", max);
            break; 
        }
        max++;
    }

    return 0;
}