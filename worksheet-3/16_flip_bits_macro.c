#include <stdio.h>

int bit_len(unsigned int n) {
    int count = 0;
    while (n) {
        count++;
        n >>= 1;
    }
    return count;
}

#define FLIP(n) ((~(n)) & ((1<< bit_len(n)) - 1))
int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);

    unsigned int flipped = FLIP(n);
    printf("flip : %u\n", flipped);

    return 0;
}
