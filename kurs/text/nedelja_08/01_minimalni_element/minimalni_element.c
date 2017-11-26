#include <stdio.h>

void ucitaj(int n, int m, int mat[][100]) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);
}

int min_element(int n, int m, int mat[][100]) {
    int ret = mat[0][0], i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (mat[i][j] < ret) {
                ret = mat[i][j];
            }
        }
    }
    return ret;
}

int main() {
    int mat[100][100], n, m;
    scanf("%d %d", &n, &m);
    ucitaj(n, m, mat);
    printf("%d", min_element(n, m, mat));
    return 0;
}