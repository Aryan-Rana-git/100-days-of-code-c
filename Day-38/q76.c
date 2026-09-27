#include <stdio.h>

int main() {
    int r, c, i, j, sym = 1;

    scanf("%d %d", &r, &c);

    int mat[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (r != c) {
        sym = 0;
    } else {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (mat[i][j] != mat[j][i]) {
                    sym = 0;
                    break;
                }
            }
            if (!sym) {
                break;
            }
        }
    }

    if (sym) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}