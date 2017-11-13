/*
    Rekurzivno: Zbir cifara
*/
#include <stdio.h>

int zbir_cif_rek(int a) {
    if (a == 0) return 0;
    return a%10 + zbir_cif_rek(a/10);
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", zbir_cif_rek(a));
    return 0;
}
