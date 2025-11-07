#include <stdio.h>
void sumAndProduct(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}
int main() {
    int x, y;
    int s, p;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sumAndProduct(x, y, &s, &p);

    printf("Sum = %d\n", s);
    printf("Product = %d\n", p);

    return 0;
}