#include <stdio.h>

int main(){
    int a[100];
    int i, n, max = -1e9, tmax = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        tmax += a[i];
        if(tmax > max){
            max = tmax;
        }
        if(tmax < 0){
            tmax = 0;
        }
    }

    printf("%d", max);
    return 0;
}
