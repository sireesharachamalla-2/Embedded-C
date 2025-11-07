#include <stdio.h>

int main() {
    int n = 5;
    int num = 1;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)
        {
            for (int j = 0; j < i; j++) {
                printf("%d ", num++);
            }
        }
        else
        {
            int start = num + i - 1;
            for (int j = 0; j < i; j++) {
                printf("%d ", start--);
            }
            num += i;
        }
        printf("\n");
    }

    return 0;
}