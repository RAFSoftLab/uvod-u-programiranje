#include <stdio.h>
#include <stdlib.h>

int pom(int arg, int delilac){
    int cifra, broj = 0, stepen = 1;
    while (arg>0){
        cifra = arg%10;
        arg/=10;
        if (cifra%delilac==0) {
            broj += stepen*cifra;
            stepen*=10;
        }
    }
    return broj;
}


int main()
{

    int i,a,b;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++){
        if (pom(i,3)==i) printf("%d\n",i);
    }
    return 0;
}
