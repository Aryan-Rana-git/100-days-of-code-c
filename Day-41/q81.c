#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("0\n");
        return 0;
    }

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    printf("%d\n", i);

    return 0;
}