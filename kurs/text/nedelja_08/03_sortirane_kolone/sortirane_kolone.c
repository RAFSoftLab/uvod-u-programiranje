#include <stdio.h>

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

void sortiraj_kolone(int n, int m, int mat[][100]) {
    int i, j, k, temp;
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++){
            for (k = i + 1; k < n; k++) {
                if (mat[i][j] > mat[k][j]) {
                    temp = mat[i][j];
                    mat[i][j] = mat[k][j];
                    mat[k][j] = temp;
                }
            }
        }
    }
}

int main() {
    int mat[100][100], n, m;
    scanf("%d %d", &n, &m);
    ucitaj(n, m, mat);
    sortiraj_kolone(n, m, mat);
    ispisi(n, m, mat);
    return 0;
}