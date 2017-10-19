#include <stdio.h>

double fun(int n) {
    if (n == 1) {
        return 1;
    }
    double s = 1.0;
    int i;
    for (i = 2; i <= n; i++) {
        s += (i-1);
    }
    return s;
}

double f1(int i, int n) {
    if (i == n) {
        return fun(i);
    }
    return fun(i) + (2.0 * n - i + 1) / f1(i+1, n);
}

double f1_i(int n) {
    double s = fun(n);
    int i;
    for (i = n-1; i >= 1; i--) {
        s = fun(i) + (2.0 * n - i + 1) / s;
    }
    return s;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%lf\n", f1(1, a));
    printf("%lf\n", f1_i(a));
    return 0;
}
