#include <stdio.h>

int main(){
    int broj;
    int ch,cs,cd,cj;
    int izvrnuti;

    scanf("%d",&broj);
    cj = broj % 10;
    broj /= 10;
    cd = broj % 10;
    broj /= 10;
    cs = broj % 10;
    broj /= 10;
    ch = broj % 10;

    izvrnuti = ch + cs*10 + cd*100 + cj*1000;

    printf("%d", izvrnuti);

    return 0;
}
