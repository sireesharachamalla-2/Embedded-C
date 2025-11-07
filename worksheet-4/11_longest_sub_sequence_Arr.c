#include <stdio.h>

int main() {
    int nums[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int maxLen = 1, currLen = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i - 1]) {
            currLen++;
        } else {
            if (currLen > maxLen)
                maxLen = currLen;
            currLen = 1;
        }
    }

    if (currLen > maxLen)
        maxLen = currLen;

    printf("Length of longest sequence: %d\n", maxLen);

    return 0;
}