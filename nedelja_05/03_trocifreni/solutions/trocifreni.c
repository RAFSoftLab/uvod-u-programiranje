#include <stdio.h>

/*
   Specifični trocifreni brojevi
   Zadatak je osmišljen kao vežba višestrukih ciklusa.
   
*/

int main(int argc, char* argv[]) {
    int i, j, k;
    
    // Cifre stotice manje od 6.
    for (i = 1; i < 6; i++) {
        // Ispisujemo samo parne desetice.
        for (j = 0; j <= 8; j += 2) {
            for (k = j+1; k <= 9; k++) {
                printf("%d ", i*100 + j*10 + k);
            }
        }
    }
    printf("\n");
    return 0;
}
