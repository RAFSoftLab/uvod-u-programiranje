#include <stdio.h>
#include <stdlib.h>

double gore(int n,int i) {
    if (i%2 == 0) return 1;
    return (n-i/2)*10+ i/2 +1;
}
double dole(int n,int i) {
    return (n-i+1)*2;
}



double rek(int n, int i) {
    if (n == i) return gore(n,i);
    return gore(n,i)+dole(n,i)/rek(n,i+1);
}

double iter(int n) {
    double resenje = gore(n,n);
    int i;
    for (i=n-1;i>=1;i--) resenje = gore(n,i)+dole(n,i)/resenje;
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
