#include <stdio.h>

int main() {
    int n, i;
    int nums[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int totalSum = 0;
    for (i = 0; i < n; i++)
        totalSum += nums[i];

    int leftSum = 0, pivot = -1;

    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            pivot = i;
            break;
        }
        leftSum += nums[i];
    }

    if (pivot != -1)
        printf("Pivot index: %d\n", pivot);
    else
        printf("No index found.\n");

    return 0;
}