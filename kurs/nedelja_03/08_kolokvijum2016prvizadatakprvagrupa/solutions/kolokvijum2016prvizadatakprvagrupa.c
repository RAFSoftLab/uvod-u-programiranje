/*
   UUP-Kolokvijum 1 2016.god,grupa 1, zadatak 1
  Napisati funkciju pom(int arg) koja vraca najvecu razliku izmedju susednih cifara argumenta
  (pretpostavimo da argument uvek ima bar dve cifre).
   Zatim ispisati sve brojeve iz intervala koji unosi korisnik
   a kojima je najveca razlika izmedju cifara manja od 3.
*/

#include <stdio.h>

int pom(int arg) {
    int max=0;
    int cifra1,cifra2;

    while (arg > 9) {
        cifra1 = arg % 10;
        arg /= 10;
        cifra2 = arg % 10;
        if (abs(cifra1 - cifra2) > max)  max = abs(cifra1 - cifra2);
    }
    return max;
}

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
        if (pom(i) < 3) printf("%d\n", i);
    return 0;
}
