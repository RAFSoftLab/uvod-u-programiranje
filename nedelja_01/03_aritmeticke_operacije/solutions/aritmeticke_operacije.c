#include <stido.h>

int main(){
    //deklarisanje 2 celbrojne promenljive
    int a,b;

    //unos vrednosti iz konzole i smestanje unete vrednosti u promenljive a i b
    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);

    printf("zbir %d, razlika %d, proizvod %d, kolicnik %d, ostatak %d", a+b, a-b, a*b, a/b, a%b);
    return 0;
}
