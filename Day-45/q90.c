#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
        printf("%c", str[i]);
        i++;
    }

    printf("\n");

    return 0;
}