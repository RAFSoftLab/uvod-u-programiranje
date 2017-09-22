/*
    Napisati program koji od unetog broja n pravi broj koji ima cifre u obrnutom redosledu.
    12345 -> 54321
    1200 -> 21
    0 -> 0
*/

#include <stdio.h>

int main() {
    int n, broj = 0;
    scanf("%d", &n);
    do {
        broj = broj * 10 + n % 10;
        n /= 10;
    } while (n != 0);
    printf("%d\n", broj);
    return 0;
}
