#include <stdio.h>
#include <stdlib.h>

int prostBroj(int a){
    int prost = 1, i;
    for (i=2;i<a;i++) {
       if (a%i == 0) return 0;
    }
    return 1;
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d", prostBroj(a));
    return 0;
}
