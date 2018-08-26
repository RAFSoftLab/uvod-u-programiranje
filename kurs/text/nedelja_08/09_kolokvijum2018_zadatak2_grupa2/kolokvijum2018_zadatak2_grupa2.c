#include <stdio.h>
#include <stdlib.h>

int odrediDuzinu(int n) {
    int duzina=0;
    while (n>0) {
        duzina++;
        n /= 10;
    }
    return duzina;
}

void postaviSrednjiRed(int mat[][100], int duzina, int broj) {
    int i = (duzina-1) /2 ;
    int j = duzina-1;
    while (broj>0) {
        mat[i][j] = broj%10 ;
        broj /= 10;
        j--;
    }
}

void postaviOstaleBrojeve(int mat[][100], int duzina) {
    int i,j,broj,brojac;
    for (j=0;j<duzina;j++) {
        broj = mat[(duzina-1) /2][j] + 1;
        if (broj>9) broj -= 10;
        brojac = 0;
        for (i = (duzina-1) /2 -1; i>=0;i--) {
            mat[i][j] = broj;
            brojac++;
            if (brojac == 2) {
                broj++;
                if (broj>9) {
                    broj -= 10;
                    brojac = 0;
                }
            }
        }
        broj = mat[(duzina-1) /2][j] ;
        brojac = 1;
        for (i = (duzina-1) /2 +1; i<duzina;i++) {
            mat[i][j] = broj;
            brojac++;
            if (brojac == 2) {
                broj--;
                if (broj<0) {
                    broj += 10;
                    brojac = 0;
                }
            }
        }
    }
}

void ispisiMatricu(int mat[][100], int duzina) {
    int i,j;
    for (i=0; i<duzina;i++) {
        for (j=0; j<duzina;j++) printf("%d ",mat[i][j]);
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int duzina = odrediDuzinu(n);
    int mat[100][100];
    postaviSrednjiRed(mat,duzina,n);
    postaviOstaleBrojeve(mat,duzina);
    ispisiMatricu(mat,duzina);
    return 0;
}
