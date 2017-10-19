/*
    Rekurzivno i iterativno: Korenovanje - 1
*/
#include <stdio.h>
#include <math.h>

double f3(int n) {
    if (n == 1) {
        return sqrt(n);
    }
    return sqrt(n + f3(n-1));
}

double f3_i(int n) {
    int i;
    double s = sqrt(1);
    for (i = 2; i <= n; i++) {
        s = sqrt(i + s);
    }
    return s;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%lf\n", f3(a));
    printf("%lf\n", f3_i(a));
    return 0;
}
