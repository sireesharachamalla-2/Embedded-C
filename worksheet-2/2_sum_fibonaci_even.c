#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            sum += a;

        c = a + b;
        a = b;
        b = c;
    }

    printf("Sum = %d\n", sum);

    return 0;
}