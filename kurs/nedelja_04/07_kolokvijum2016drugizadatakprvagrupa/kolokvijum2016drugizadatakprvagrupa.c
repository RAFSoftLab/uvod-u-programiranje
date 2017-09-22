/*
    Koristeci naredbu while i funkciju getchar() za citanje karaktera
    obraditi ulaznu sekvencu karaktera koja se sastoji
    od brojeva i znakova + i -, tako da se izracuna i ispise rezultat aritmetickih operacija
    sabiranja i oduzimanja koje se izvrsavaju redom.
    primer: 10+13-12+25-5+100
    rezultat: 131
*/

#include <stdio.h>

int main() {
    char c, op = '+';
    int broj = 0, resenje = 0;
    c=getchar();
    while (c != '\n') {
        if ( (c >= '0') && (c <= '9') ) broj = broj * 10 + c - '0';
        else {
            if (op == '+') resenje += broj;
            else resenje -= broj;
            op = c;
            broj = 0;
        }
        c = getchar();
    }
    if (op == '+') resenje += broj;
    else resenje -= broj;
    printf("%d\n", resenje);
    return 0;
}
