#include <stdio.h>
#include <stdlib.h>



int min(int a, int b){
    if (a > b) return b;
    else return a;
}

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){

            if(j<=n/2){
                printf("%d",min(min(i,j),min(n-i+1,n-j+1)));
            }

            else {
                printf("%d",min(i,n-i+1));
            }
        }
        printf("\n");
    }
    return 0;
}
