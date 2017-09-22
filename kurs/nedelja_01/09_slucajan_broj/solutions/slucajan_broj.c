#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n,m;
    int k;

    srand(time(0));

    scanf("%d%d",&n,&m);
    k = rand()%(m-n+1) + n;
    printf("%d", k);
    return 0;
}
