#include <stdio.h>

/*
    Savrseni brojevi   
 */

int main(int argc, char* argv[]) {
    int i, j, n;
    int suma;
    // Ucitavamo granicu
    scanf("%d", &n);
    
    // Testiramo da li je "i" savrsen broj
    for (i = 2; i <= n; i++) {
        // Resetujemo sumu za svaki nov broj
        suma = 1;
        // "j" je potencijalni delioc, njega cemo ukljuciti u sumu ako jeste
        for (j = 2; j <= i/2; j++) {
            // testiramo da li je deljiv
            if (i % j == 0) {
                suma = suma + j;
            }
        }
        // proveravamo da li je suma jednaka broju, preduslov da bude savrsen broj
        if (suma == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
