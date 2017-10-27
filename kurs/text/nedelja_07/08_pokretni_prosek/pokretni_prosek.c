#include <stdio.h>

int main() {
    int n, k, i, j, a[100], b[100], sum;

    scanf("%d%d", &n, &k);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        if( i < k-1){
            b[i] = a[i];
        }else{
            sum = 0;
            for(j = 0; j < k; j++){
                sum += a[i-j];
            }
            b[i] = sum / k;
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", b[i]);
    }

    return 0;
}

