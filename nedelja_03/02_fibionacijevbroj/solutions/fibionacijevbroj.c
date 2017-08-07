/*
    Naci n-ti Fibonacijev broj.
*/

#include <stdio.h>

int main() {

    int n, prvi, drugi, sledeci, i;
    prvi=1;
    drugi=1;
    scanf("%d", &n);
    for (i = 3; i <= n; i++) {
        sledeci = prvi + drugi;
        prvi = drugi;
        drugi = sledeci;
    }
    printf("%d\n", drugi);
    return 0;
}
