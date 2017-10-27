#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100], b[100], c[100];
    int n, ai, bi, ci, i;
    bi = ci = 0;
    scanf("%d", &n);

    for(ai = 0; ai < n; ai++){
        scanf("%d", &a[ai]);
    }

    for(ai = 0; ai < n; ai++){
        if(a[ai] % 2 == 0){
            b[bi++] = a[ai];
        }else{
            c[ci++] = a[ai];
        }
    }

    for(i = 0; i < bi; i++){
        printf("%d ", b[i]);
    }
    printf("\n");

    for(i = 0; i < ci; i++){
        printf("%d ", c[i]);
    }

    return 0;
}
