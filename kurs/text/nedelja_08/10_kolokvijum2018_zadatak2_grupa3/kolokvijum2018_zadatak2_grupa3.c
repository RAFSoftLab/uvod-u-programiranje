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

void postaviDijagonale(int mat[][100], int duzina, int broj) {
    int i = duzina-1, j = 0;
    int i1 = 0, j1 = 0;
    while (broj>0) {
        mat[i][j] = broj%10 ;
        mat[i1][j1] = broj%10;
        broj /= 10;
        i--;
        j++;
        i1++;
        j1++;
    }
}

void postaviOstaleBrojeve(int mat[][100], int duzina) {
    int i,j,broj,brojac;
    for (j=0;j<duzina;j++) {
        broj = mat[j][j] +1 ;
        if (broj>9) broj -= 10;
        for (i=j+1;i<duzina-j-1;i++) mat[i][j] = broj ;
    }
     for (j=0;j<duzina;j++) {
        broj = mat[duzina-j-1][j] +1 ;
        if (broj>9) broj -= 10;
        for (i=duzina-j;i<j;i++) mat[i][j] = broj ;
    }
    for (j=0;j<duzina;j++) {
        broj = mat[j][j] -1 ;
        if (broj<0) broj += 10;
        if (j<duzina-1-j) {
            for (i=j-1;i>=0;i--) mat[i][j] = broj ;
            for (i=duzina-j;i<duzina;i++) mat[i][j] = broj ;

        }
        else {
            for (i=duzina-j-2;i>=0;i--) mat[i][j] = broj ;
            for (i=j+1;i<duzina;i++) mat[i][j] = broj ;
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
    postaviDijagonale(mat,duzina,n);
    postaviOstaleBrojeve(mat,duzina);
    ispisiMatricu(mat,duzina);
    return 0;
}
