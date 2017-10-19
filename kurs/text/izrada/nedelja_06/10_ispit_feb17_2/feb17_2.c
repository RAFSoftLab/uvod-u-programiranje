#include <stdio.h>
#include <math.h>

double fibo(int n) {
    if (n == 0) return 0.0;
    if (n == 1 || n == 2) {
        return 1.0;
    }
    else {
        int i;
        double a, b, c;
        a = b = 1.0;
        for (i = 3; i <= n; i++) {
            c = a+b;
            a = b;
            b = c;
        }
        return b;
    }
}

double fun(int i, int n) {
    if (i % 2 == 1) {
        int stepen = n - i + 1;
        double s = fibo(i) / pow(2, stepen);
        return s;
    } else {
        return fibo(i);
    }
}

double f3(int i, int n) {
    if (i == n) {
        return sqrt(fun(i, n));
    }
    return sqrt(fun(i, n) + f3(i+1 ,n));
}

double f3_i(int n) {
    double s = sqrt(fun(n, n));
    int i;
    for (i = n-1; i >= 1; i--) {
        s = sqrt(fun(i, n) + s);
    }
    return s;
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%lf\n", f3(1, n));
    printf("%lf\n", f3_i(n));
    return 0;
}
