#include <stdio.h>

/*
    Piramida 
    za uneto n = 5 piramida bi trebalo da izgleda:
         *
        ***
       *****
      *******
     *********
*/

int main(int argc, char* argv[]) {
    int i, j, n;
    // Ucitavamo visinu piramide
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Prvo ispisujemo prazne prostore (njih ima n - i)
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Crtamo piramidu, u svakom redu zvezdica ima 2*i - 1
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Novi red
        printf("\n");
    }
    return 0;
}
