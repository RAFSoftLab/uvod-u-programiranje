#include <stdio.h>
#include <stdlib.h>



void ucitajMatricu(int mat[][100], int n) {
    int i,j;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) scanf("%d",&mat[i][j]);
    }
}

int nadjiBrojRed(int mat[][100], int n) {
    int i,j,k;
    int trenutnoBroj = 0;
    int max = 0;
    int broj = 0;
    for (i=0;i<n;i++) {
        trenutnoBroj = 0;
        for (j = 0; j <n;j++) {
            trenutnoBroj = 0;
            for (k = 0; k<n ; k++) {
                if (mat[i][j]==mat[i][k]) trenutnoBroj++;
            }
            if (trenutnoBroj>max) max = trenutnoBroj;
        }
    }
    return max;
}

int nadjiBrojKolona(int mat[][100], int n) {
    int i,j,k;
    int trenutnoBroj = 0;
    int max = 0;
    int broj = 0;
    for (j=0;j<n;j++) {
        trenutnoBroj = 0;
        for (i = 0; i <n;i++) {
            trenutnoBroj = 0;
            for (k = 0; k<n ; k++) {
                if (mat[i][j]==mat[k][j]) trenutnoBroj++;
            }
            if (trenutnoBroj>max) max = trenutnoBroj;
        }
    }
    return max;
}

void ispisiRedove(int mat[][100], int n, int brojRed) {
    int i,j,k;
    int trenutnoBroj = 0;
    int flag = 0;
    int max = 0;
    int broj = 0;
    for (i=0;i<n;i++) {
        trenutnoBroj = 0;
        flag = 0;
        for (j = 0; j <n;j++) {
            trenutnoBroj = 0;
            for (k =0; k<n ; k++) {
                if (mat[i][j]==mat[i][k]) trenutnoBroj++;
            }
            if (trenutnoBroj==brojRed) flag = 1;
        }
        if (flag == 1) printf("%d ",i);
    }
}

void ispisiKolone(int mat[][100], int n, int brojKolone) {
    int i,j,k;
    int trenutnoBroj = 0;
    int max = 0;
    int broj = 0;
    int flag = 0;
    for (j=0;j<n;j++) {
        trenutnoBroj = 0;
        flag = 0;
        for (i = 0; i <n;i++) {
            trenutnoBroj = 0;
            for (k = 0; k<n ; k++) {
                if (mat[i][j]==mat[k][j]) trenutnoBroj++;
            }
            if (trenutnoBroj==brojKolone) flag = 1;
        }
        if (flag == 1) printf("%d ", j);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int mat[100][100];
    ucitajMatricu(mat,n);
    int brojRed = nadjiBrojRed(mat,n);
    int brojKolona = nadjiBrojKolona(mat,n);
    ispisiRedove(mat,n,brojRed);
    printf("\n");
    ispisiKolone(mat,n,brojKolona);
    return 0;
}
