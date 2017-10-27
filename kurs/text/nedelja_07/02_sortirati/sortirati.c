#include <stdio.h>
#include <stdlib.h>

int main(){
    int niz[100];
    int i, j, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &niz[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(niz[i] > niz[j]){
                int temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", niz[i]);
    }
    return 0;
}
