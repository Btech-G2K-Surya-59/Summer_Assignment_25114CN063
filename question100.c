#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20] = {"surya", "spiderman", "keji", "gabimaru", "pear"};
    char temp[20];
    int i, j;

    
    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    
    printf("Words sorted by length:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
