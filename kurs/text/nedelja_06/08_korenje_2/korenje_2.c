/*
    Rekurzivno i iterativno: Korenovanje - 2
*/
#include <stdio.h>
#include <math.h>

double f4(int i, int n) {
    if (i == n) {
        return sqrt(n);
    }
    return sqrt(i + f4(i+1, n));
}

double f4_i(int n) {
    int i;
    double s = sqrt(n);
    for (i = n-1; i >= 1; i--) {
        s = sqrt(i + s);
    }
    return s;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%lf\n", f4(1, a));
    printf("%lf\n", f4_i(a));
    return 0;
}
