/*
    Naci aritmeticku sredinu delilaca broja n.
*/

#include <stdio.h>

int main() {
    int n, i, brojac = 0, zbir = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
        {
            brojac++;
            zbir += i;
        }
    }
    printf("%.2lf\n", 1.0 * zbir / brojac);
    return 0;
}
