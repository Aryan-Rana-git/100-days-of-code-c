#include <stdio.h>

int main() {
    int num, first, last, pow10 = 1, temp, mid, res;
    scanf("%d", &num);

    if (num < 10 && num > -10) {
        printf("%d\n", num);
        return 0;
    }

    int neg = 0;
    if (num < 0) {
        neg = 1;
        num = -num;
    }

    last = num % 10;
    temp = num;

    while (temp >= 10) {
        temp = temp / 10;
        pow10 = pow10 * 10;
    }

    first = temp;
    mid = (num % pow10) / 10;
    res = last * pow10 + mid * 10 + first;

    if (neg) {
        res = -res;
    }

    printf("%d\n", res);
    return 0;
}