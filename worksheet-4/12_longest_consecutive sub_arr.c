#include <stdio.h>
int main() {
    int nums[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int maxLen = 1, currLen = 1;
    int start = 0, end = 0, tempStart = 0;

    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i - 1]) {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                start = tempStart;
                end = i - 1;
            }
            currLen = 1;
            tempStart = i;
        }
    }
    if (currLen > maxLen) {
        maxLen = currLen;
        start = tempStart;
        end = n - 1;
    }

    printf("Length of longest: %d\n", maxLen);
    for (int i = start; i <= end; i++)
        printf("%d ", nums[i]);
    printf("\n");

    return 0;
}