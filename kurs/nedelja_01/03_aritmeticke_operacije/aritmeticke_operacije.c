#include <stido.h>

int main(){
    //deklarisanje 2 celbrojne promenljive
    int a,b;

    //unos vrednosti iz konzole i smestanje unete vrednosti u promenljive a i b
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d %d %d %d %d", a+b, a-b, a*b, a/b, a%b);
    return 0;
}
