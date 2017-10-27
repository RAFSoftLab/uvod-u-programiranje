#include <stdio.h>
#include <stdlib.h>

int main(){
    int niz[200];
    int i, n;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &niz[i]);
    }

    for(i = n-1; i>= 0; i--){
        printf("%d ", niz[i]);
    }

    return 0;
}
