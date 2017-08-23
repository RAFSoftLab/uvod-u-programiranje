#include <stdio.h>

int main(){
    double tc, tk;

    printf("Unesite vrednost temperature u Celzijusima: ");
    scanf("%lf", &tc);

    tk = tc + 273.15;

    printf("%.1lfK\n", tk);
    return 0;
}
