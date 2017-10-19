/*
    Rekurzivno i iterativno: Razlomci - 1
*/
#include <stdio.h>

double f1(int n) {
    if (n == 1) {
        return 1;
    }
    return n + 1.0 / f1(n-1);
}

double f1_i(int n) {
    int i;
    double s = 1.0;
    for (i = 2; i <= n; i++) {
        s = i + 1.0/s;
    }
    return s;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%lf\n", f1(a));
    printf("%lf\n", f1_i(a));
    return 0;
}
