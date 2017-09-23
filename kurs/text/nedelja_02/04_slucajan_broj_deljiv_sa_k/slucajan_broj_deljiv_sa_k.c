#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n,m,k;
    int x,y;
    int num;
    srand(time(0));

    scanf("%d%d%d", &n, &m, &k);
    x = n + (k - n%k);
    y = m - m%k;
    x -= n%k == 0 ? k : 0;
    num = (y-x)/k + 1;
    printf("%d", x + (rand()%num) * k);
    return 0;
}
