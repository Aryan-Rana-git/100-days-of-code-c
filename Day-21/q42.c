#include <stdio.h>

int main() {
    int num, i, sum = 0;
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not perfect number\n");
        return 0;
    }

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == num) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}