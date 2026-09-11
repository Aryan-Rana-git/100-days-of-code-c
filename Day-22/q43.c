#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0, fact, i;
    scanf("%d", &num);

    if (num <= 0) {
        printf("Not strong number\n");
        return 0;
    }

    temp = num;
    while (temp > 0) {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}