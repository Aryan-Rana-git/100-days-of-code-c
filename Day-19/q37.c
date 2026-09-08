#include <stdio.h>

int main() {
    int a, b, x, y, temp, gcd;
    long long lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = (a < 0) ? -a : a;
    y = (b < 0) ? -b : b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    if (a == 0 || b == 0) {
        lcm = 0;
    } else {
        lcm = ((long long)((a < 0) ? -a : a) / gcd) * ((b < 0) ? -b : b);
    }

    printf("%lld\n", lcm);

    return 0;
}