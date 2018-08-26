#include <stdio.h>
#include <stdlib.h>

int izbaciVeceCifre(int a, int k){
    int resenje = 0, cifra, stepen = 1;
    while (a>0) {
        cifra = a%10;
        a /= 10;
        if (cifra%k != 0) {
            resenje = resenje + stepen*cifra;
            stepen *=10;
        }
    }
    return resenje;
}

int main()
{
    int a,k;
    scanf("%d%d",&a,&k);
    printf("%d", izbaciVeceCifre(a,k));
    return 0;
}
