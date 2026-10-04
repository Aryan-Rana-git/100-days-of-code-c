#include <stdio.h>

int main() {
    char str[1000], target;
    int i = 0, count = 0;

    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("0\n");
        return 0;
    }

    if (scanf(" %c", &target) != 1) {
        printf("0\n");
        return 0;
    }

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}