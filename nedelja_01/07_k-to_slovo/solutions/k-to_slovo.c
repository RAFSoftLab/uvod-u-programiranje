#include <stdio.h>

int main(){
    char c;
    int k;

    printf("Unesite jedno slovo: ");
    scanf("%c", &c);

    printf("Unesite broj k: ");
    scanf("%d", &k);

    printf("%c", c+k);

    return 0;
}
