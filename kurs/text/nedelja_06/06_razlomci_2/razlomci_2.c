/*
    Rekurzivno i iterativno: Razlomci - 2
*/
#include <stdio.h>

double f2(int i, int n) {
    if (i == n) {
        return 1.0 * n;
    }
    return i + 1.0 / f2(i+1, n);
}

double f2_i(int n) {
    int i;
    double s = n;
    for (i = n-1; i >= 1; i--) {
        s = i + 1.0/s;
    }
    return s;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%lf\n", f2(1, a));
    printf("%lf\n", f2_i(a));
    return 0;
}
