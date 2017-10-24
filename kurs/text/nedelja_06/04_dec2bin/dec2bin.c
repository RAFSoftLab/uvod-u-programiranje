/*
    Rekurzivno: Dekadni u binarni sistem
*/
#include <stdio.h>

int dec2bin(int a) {
    if (a == 0) return 0;
    return dec2bin(a/2)*10 + a%2;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", dec2bin(a));
    return 0;
}
