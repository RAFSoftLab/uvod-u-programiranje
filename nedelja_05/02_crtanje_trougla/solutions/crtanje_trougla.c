#include <stdio.h>

/*
    Crtanje trougla
    za n = 5 potrebno je ispisati sledeci trougao:
    
        *
       **
      ***
     ****
    *****

*/

int main(int argc, char* argv[]) {
    // n - dimenzije trougla
    int n, i, j;
    scanf("%d", &n);

    // Prvo ispisujemo razmake, pa onda zvezdice,
    // Za svaki red je potrebno n-i razmaka, pa i zvezdica
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
