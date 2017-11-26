#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void ucitaj(int n, int m, int mat[][100]) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);
}

void ispisi(int n, int m, int mat[][100]) {
    int i, j;
    for (i = 0; i < n; i++, putchar('\n'))
        for (j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
}

void transponuj(int* n, int* m, int mat[][100]) {
    int i, j, t;
    for (i = 0; i < max(*n, *m); i++){
        for (j = 0; j < i; j++) {
            t = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = t;
        }
    }
    t = *m;
    *m = *n;
    *n = t;
}

int main() {
    int mat[100][100], n, m;
    scanf("%d %d", &n, &m);
    ucitaj(n, m, mat);
    transponuj(&n, &m, mat);
    ispisi(n, m, mat);
    return 0;
}