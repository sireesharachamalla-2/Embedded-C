#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr[n];
    int sum = 0;

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        ptr[i] = &arr[i];
    }

    for (i = 0; i < n; i++) {
        sum += *ptr[i];
    }

    float avg = (float)sum / n;
    printf("Average = %.2f\n", avg);

    return 0;
}