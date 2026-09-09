#include <stdio.h>

int main() {
    char binary[105];
    int i = 0;

    printf("Enter a binary number: ");
    scanf("%104s", binary);

    while (binary[i] != '\0') {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        }
        i++;
    }
    printf("\n");

    return 0;
}