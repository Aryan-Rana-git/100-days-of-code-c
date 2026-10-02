#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, i, j, isPal = 1;

    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Palindrome\n");
        return 0;
    }

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    i = 0;
    j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            isPal = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPal) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}