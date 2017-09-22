#include <stdio.h>

/*
    Crtanje: kvadrat
    za uneto n = 5 obrnuta piramida bi trebalo da izgleda:

    1 2 3 4 5
    2 3 4 5 1
    3 4 5 1 2
    4 5 1 2 3
    5 1 2 3 4

 */

int main(int argc, char* argv[]) {
    int i, j, n;
    // Ucitavamo dimenzije kvadrata
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", (i + j) % n + 1);
        } 
        printf("\n");
    }
    return 0;
}
