#include <stdio.h>

int main(){
    int a[1005];

    int n, i, max, x, br;

    for(i = 0; i < 1004; i++){
        a[i] = 0;
    }

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &x);
        a[x]++;
    }

    max = -1;
    for(i = 0; i < 1004; i++){
        if(max < a[i]){
            max = a[i];
            br = i;
        }
    }
    printf("%d %d", br, max);

    return 0;
}
