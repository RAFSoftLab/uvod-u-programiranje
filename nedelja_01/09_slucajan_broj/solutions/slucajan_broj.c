#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    int k;

    scanf("%d%d",&n,&m);
    k = rand()%(m-n+1) + n;
    printf("%d", k);
    return 0;
}
