#include <stdio.h>
/*
    Napisati program za obradu teksta koji sabira brojeve u ogledalu unutar teksta.
*/

int obrni(int br){
    int novi = 0;
    while(br>0){
        novi = novi * 10 + br % 10;
        br /= 10;
    }
    return novi;
}

int main()
{
    char c, last;
    int broj = 0;
    int suma = 0;
    c = getchar();
    while(c != '\n'){
        if ( (c >= '0') && (c <= '9') ) broj = broj * 10 + c - '0';
        else {
            suma += obrni(broj);
            broj = 0;
        }
        last = c;
        c = getchar();
    }
    if ( (last >= '0') && (last <= '9') ) suma += obrni(broj);
    printf("%d",suma);
    return 0;
}
