#include <stdio.h>

int palindrom(int a[], int l, int r){

    while(l < r){
        if(a[l] != a[r]) return 0;
        l++;
        r--;
    }
    return 1;
}


int main(){
    int n, a[20], l, i, r, lbest = 0, rbest = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(l = 0; l < n; l++){
        for(r = l; r < n; r++){
            if(palindrom(a, l, r)){
                if(r - l + 1 > rbest - lbest + 1){
                    lbest = l;
                    rbest = r;
                }
            }
        }
    }

    for(i = lbest; i <= rbest; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
