#include <stdio.h>

int main() {
    int n, rem;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    while (n != 0) {
        rem = n % 10;
        if (rem % 2 != 0) {
            product *= rem;
        }
        n /= 10;
    }

    printf("%lld\n", product);

    return 0;
}