#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quot = a / b;
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quot);
    return 0;
}