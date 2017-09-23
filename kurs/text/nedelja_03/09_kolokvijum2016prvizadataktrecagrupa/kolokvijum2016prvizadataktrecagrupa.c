/*Napisati funkciju pom(int arg, int k) koja vraca broj dobijen
 kada se iz argumenta arg uklone sve cifre manje od k
 (vratiti nula ako se izbace sve cifre).
 Sabrati brojeve koje vraca ova funkcija za 3 broja koja korisnik unese, i za k=5.

*/
#include <stdio.h>


int pom(int arg, int k) {
    int resenje = 0;
    int cifra,brojac=0;
    while (arg > 0) {
        if (arg % 10 >= k) {
            cifra = arg % 10;
            resenje = resenje + pow(10,brojac)*cifra;
            brojac++;
        }
        arg /= 10;
    }
    return resenje;
}

int main() {
    int a, b, c, a1, b1, c1, k = 5;
    scanf("%d %d %d", &a, &b, &c);
    a1 = pom(a, k);
    b1 = pom(b, k);
    c1 = pom(c, k);
    printf("%d\n",a1 + b1 + c1);
    return 0;
}
