#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int i, digit, maxFreq = 0, result = 0;

    scanf("%lld", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        freq[0] = 1;
    }

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("%d\n", result);

    return 0;
}