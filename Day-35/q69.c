#include <stdio.h>

int main() {
    int n, i, max1, max2, hasMax2 = 0;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
            hasMax2 = 1;
        } else if (arr[i] < max1 && (!hasMax2 || arr[i] > max2)) {
            max2 = arr[i];
            hasMax2 = 1;
        }
    }

    printf("%d\n", max2);

    return 0;
}