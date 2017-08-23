#include <stdio.h>

/*
    Tablica mnozenja
*/

int main(int argc, char* argv[]) {
    // n - visina tablice, m - duzina tablice
    int m, n, i, j;
    scanf("%d%d", &n, &m);

    // prolazimo kroz svaki red i za svaki
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            printf("%4d", i*j);
        }
        printf("\n");
    }
    return 0;
}
