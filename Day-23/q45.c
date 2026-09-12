#include <stdio.h>

int main() {
    int n, i, num = 2, den = 3;
    double sum = 0.0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (double)num / den;
        num = num + 2;
        den = den + 4;
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}