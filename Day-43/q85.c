#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, i, j;
    char temp;

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    i = 0;
    j = len - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    for (i = 0; i < len; i++) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}