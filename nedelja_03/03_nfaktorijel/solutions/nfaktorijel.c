/*
    Izracunati n!.
*/

#include <stdio.h>

int main() {
    int n, i, faktorijel = 1;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) faktorijel *= i;
    printf("%d\n", faktorijel);
    return 0;
}
