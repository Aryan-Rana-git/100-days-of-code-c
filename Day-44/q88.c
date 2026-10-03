#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        printf("%c", str[i]);
        i++;
    }

    printf("\n");

    return 0;
}