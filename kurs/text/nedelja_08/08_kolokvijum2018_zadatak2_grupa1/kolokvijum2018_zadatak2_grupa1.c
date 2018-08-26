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

void postaviSporednuDijagonalu(int mat[][100], int duzina, int broj) {
    int i = duzina-1;
    int j = 0;
    while (broj>0) {
        mat[i][j] = broj%10 ;
        broj /= 10;
        i--;
        j++;
    }
}

void postaviOstaleBrojeve(int mat[][100], int duzina) {
    int i,j,broj,brojac;
    for (i=0;i<duzina;i++) {
        broj = mat[i][duzina-i-1] -1 ;
        if (broj<0) broj += 10;
        brojac = 0;
        for (j=duzina-1-i-1;j>=0;j--) {
            mat[i][j] = broj ;
            brojac++;
            if (brojac==2) {
                broj--;
                brojac = 0;
            }
            if (broj<0) broj += 10;
        }
        brojac = 1;
        broj = mat[i][duzina-i-1] ;
        for (j=duzina-i;j<duzina;j++) {
            mat[i][j] = broj ;
            brojac++;
            if (brojac==2) {
                broj++;
                brojac = 0;
            }
            if (broj>9) broj -= 10;
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
    postaviSporednuDijagonalu(mat,duzina,n);
    postaviOstaleBrojeve(mat,duzina);
    ispisiMatricu(mat,duzina);
    return 0;
}
