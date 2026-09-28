#include <stdio.h>

int main() {
    int r, c, i, j, k, distinct = 1, limit;

    scanf("%d %d", &r, &c);

    int mat[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    limit = r < c ? r : c;

    for (i = 0; i < limit; i++) {
        for (k = i + 1; k < limit; k++) {
            if (mat[i][i] == mat[k][k]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) {
            break;
        }
    }

    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}