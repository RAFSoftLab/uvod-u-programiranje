/*
 Prost broj
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

int samoProst235(int n) {
    int i;
    for (i = 2; i <= n; i++) {
        if (n % i == 0 && jeProst(i) && !(i == 2 || i == 3 || i == 5)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (samoProst235(i))
            printf("%d ", i);
    }
    return 0;
}
