#include <stdio.h>

int main() {
    int r, c, i, j, d, start, end;

    scanf("%d %d", &r, &c);

    int mat[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (d = 0; d <= r + c - 2; d++) {
        if (d % 2 == 0) {
            start = d < r - 1 ? d : r - 1;
            end = d - c + 1 > 0 ? d - c + 1 : 0;
            for (i = start; i >= end; i--) {
                j = d - i;
                printf("%d ", mat[i][j]);
            }
        } else {
            start = d < c - 1 ? d : c - 1;
            end = d - r + 1 > 0 ? d - r + 1 : 0;
            for (j = start; j >= end; j--) {
                i = d - j;
                printf("%d ", mat[i][j]);
            }
        }
    }

    printf("\n");

    return 0;
}