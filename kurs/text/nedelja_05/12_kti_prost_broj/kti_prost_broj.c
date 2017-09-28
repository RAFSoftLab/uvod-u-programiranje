/*
 K-ti prost broj
 */

#include <stdio.h>
#include <math.h>

int jeProst(int n) {
    if (n <= 1) {
        return 0;
    }
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, s;
    scanf("%d", &n);
    i = 0;
    s = 1;
    while (1) {
        if (jeProst(s)) {
            i++;
            if (i == n) break;
        }
        s++;
    }
    printf("%d\n", s);
    return 0;
}
