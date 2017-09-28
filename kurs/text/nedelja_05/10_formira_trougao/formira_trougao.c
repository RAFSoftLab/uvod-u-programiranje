/*
Formiranje trougla
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int formiraTrougao(int a, int b, int c) {
    if (a + b > c && b + c > a && a + c > b &&
        abs(a - b) < c && abs(b - c) < a && abs(a - c) < b) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (formiraTrougao(a, b, c)) {
        printf("moze\n");
    } else {
        printf("ne moze\n");
    }
    return 0;
}
