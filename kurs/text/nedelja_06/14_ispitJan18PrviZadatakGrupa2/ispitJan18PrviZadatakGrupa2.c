#include <stdio.h>
#include <stdlib.h>

double fib(int n) {
    int i, prvi, drugi, zbir;
    prvi = drugi = zbir = 1;
    for (i = 0; i < n-2; i ++) {
        zbir = prvi + drugi ;
        prvi = drugi;
        drugi = zbir;
    }
    return zbir;
}

double f(int n,int i) {
    return (n-i+1)*2 * pow (10,n-i);
}

double razlomak(int n, int i) {
    return fib(i)/f(n,i);
}


double rek(int n, int i) {
    if (n == i) return sqrt(razlomak(n,i));
    return sqrt(razlomak(n,i)+rek(n,i+1));
}

double iter(int n) {
    double resenje = 0;
    int i;
    for (i=n;i>=1;i--) resenje = sqrt(razlomak(n,i)+resenje);
    return resenje;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%lf\n", rek(n,1));
    printf("%lf", iter(n));

    return 0;
}
