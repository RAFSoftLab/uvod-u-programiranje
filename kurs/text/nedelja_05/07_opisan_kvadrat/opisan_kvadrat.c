#include <stdio.h>

/*
    Crtanje: Opisan kvadrat
    za dato n = 5 figura bi trebalo da izgleda:

    *****
    *   *
    *   *
    *   *
    *****
 */

int main(int argc, char* argv[]) {
    int i, j, n;
    // Ucitavamo dimenzije kvadrata
    scanf("%d", &n);

    // U prvom i poslednjem redu upisujemo zvezdice, kao i u prvoj i poslednjoj koloni
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || j == 1 || i == n || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
