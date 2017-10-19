/*
    Rekurzivno: Matrica zvezdica
*/
#include <stdio.h>

void matrica_zvezdica(int n, int m) {
    if (n == 0) return;
    int i;
    for (i = 0; i < m; i++) {
        printf("*");
    }
    printf("\n");
    matrica_zvezdica(n-1, m);
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    matrica_zvezdica(a, b);
    return 0;
}
