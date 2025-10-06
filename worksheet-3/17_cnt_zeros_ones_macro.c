#include <stdio.h>

#define COUNT_ONES(n) count_ones(n)
#define COUNT_ZEROS(n) ((sizeof(n) * 8) - count_ones(n))
int count_ones(unsigned int n) {
    int c = 0;
    while (n) {
        if (n & 1) 
            c++;
        n >>= 1; 
    }
    return c;
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("number of 1s: %d\n", COUNT_ONES(num));
    printf("number of 0s: %ld\n", COUNT_ZEROS(num));

    return 0;
}
