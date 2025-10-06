#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "TO BE OR NOT TO BE";
    char words[20][20];
    int i = 0, j = 0, k = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            words[j][k++] = str[i];
        } else {
            words[j][k] = '\0';
            j++;
            k = 0;
        }
    }
    words[j][k] = '\0';
    int wordCount = j + 1;

    int maxLen = 0;
    for (i = 0; i < wordCount; i++) {
        int len = strlen(words[i]);
        if (len > maxLen)
            maxLen = len;
    }

    for (i = 0; i < maxLen; i++) {
        for (j = 0; j < wordCount; j++) {
            if (i < strlen(words[j]))
                printf("%c", words[j][i]);
        }
        printf(" ");
    }

    return 0;
}