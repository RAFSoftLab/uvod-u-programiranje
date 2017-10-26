#include <stdio.h>

int main(){
    int a[100];
    int n, i, k;

    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = k; i < n + k; i++){
        printf("%d ", a[i%n]);
    }
    return 0;
}
