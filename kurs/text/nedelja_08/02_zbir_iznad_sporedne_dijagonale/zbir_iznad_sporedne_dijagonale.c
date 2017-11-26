#include <stdio.h>

void ucitaj(int n, int mat[][100]) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
}

int zbir_iznad_sporedne(int n, int mat[][100]) {
    int ret = 0, i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i + j < n - 1){
            	ret += mat[i][j];
            }
        }
    }
    return ret;
}

int main() {
    int mat[100][100], n;
    scanf("%d", &n);
    ucitaj(n, mat);
    printf("%d", zbir_iznad_sporedne(n, mat));
    return 0;
}