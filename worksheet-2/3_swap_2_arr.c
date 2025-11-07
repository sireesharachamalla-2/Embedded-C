#include <stdio.h>

void swapArrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    swapArrays(arr1, arr2, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    printf("\n");
    return 0;
}