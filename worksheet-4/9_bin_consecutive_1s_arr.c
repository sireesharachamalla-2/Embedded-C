#include <stdio.h>
int main() {
    int arr[100], n;
    int count = 0, max = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d binary elements (0 or 1): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            if (count > max)
                max = count;
        } else {
            count = 0;
        }
    }

    printf("Maximum consecutive 1's: %d\n", max);
    return 0;
}