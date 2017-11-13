#include <stdio.h>

void ispisi(int n, int m, int mat[][100]) {
    int i, j;
    for (i = 0; i < n; i++, putchar('\n'))
        for (j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
}

void nextpos(int* nextposi, int* nextposj, int posi, int posj, int d) {
    switch (d) {
    case 0: // desno
        *nextposi = posi;
        *nextposj = posj + 1;
        break;
    case 1: // dole
        *nextposi = posi + 1;
        *nextposj = posj;
        break;
    case 2: // levo
        *nextposi = posi;
        *nextposj = posj - 1;
        break;
    case 3: // gore
        *nextposi = posi - 1;
        *nextposj = posj;
        break;
    }
}

// Popunjava matricu spiralno
void mat_spiralno(int n, int m, int mat[][100]) {
    int i, j, d = 0, posi = 1, posj = 1, nextposi, nextposj;

    // U implementaciji kolone i vrste matrice numerisemo od 1 do n.
    // Oivicimo matricu nulama.
    for (i = 0; i <= n + 1; i++) {
        for (j = 0; j < m + 1; j++) {
            if (i == 0 || i == n + 1 || j == 0 || j == m + 1) mat[i][j] = 0;
            else mat[i][j] = -1;
        }
    }

    for (i = 1; i <= n * m; i++) {
        mat[posi][posj] = i;
        nextpos(&nextposi, &nextposj, posi, posj, d);
        if (mat[nextposi][nextposj] != -1) {
            // Ne mozemo da se pomerimo u smeru d, moramo promeniti smer.
            d = (d + 1) % 4;
            nextpos(&nextposi, &nextposj, posi, posj, d);
        }
        posi = nextposi;
        posj = nextposj;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++){
            mat[i - 1][j - 1] = mat[i][j];
        }
    }
}

int main() {
    int mat[100][100], n, m;
    scanf("%d %d", &n, &m);
    mat_spiralno(n, m, mat);
    ispisi(n, m, mat);
    return 0;
}
