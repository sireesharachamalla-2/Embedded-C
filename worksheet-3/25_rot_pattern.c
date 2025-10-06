#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;  
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", a[(i + j) % n]);
        }
        printf("\n");
    }
    return 0;
}