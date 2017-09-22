/*
    Ispisati najveci od n unetih brojeva.
*/

#include <stdio.h>

int main() {
    int n, i, a, max;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        if (i == 0) {
            max = a;
        } else if (a > max) max = a;
    }
    printf("%d\n", max);
    return 0;
}
