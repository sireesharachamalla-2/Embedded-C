#include <stdio.h>

int compareStrings(char *s1, char *s2) {
    while (*s1 && *s2) {  // loop until either string ends
        if (*s1 != *s2)
            return (*s1 - *s2);  // return ASCII difference
        s1++;
        s2++;
    }
    return (*s1 - *s2);  // handles unequal lengths
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int result = compareStrings(str1, str2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result > 0)
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");

    return 0;
}
