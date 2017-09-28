/*
    Zaokruzi broj.
*/

#include <stdio.h>
#include <math.h>

double zaokruziBroj(double x, int a) {
    return floor(x * pow(10, a)) / pow(10, a);
}

int main() {
    int a;
    double x;
    scanf("%lf%d", &x, &a);
    printf("%lf\n", zaokruziBroj(x, a));
    return 0;
}
