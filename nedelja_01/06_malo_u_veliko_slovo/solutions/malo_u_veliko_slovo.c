#include <stdio.h>

int main(){
    char c;

    printf("Unesite jedno malo slovo: ");
    scanf("%c", &c);

    printf("%c\n", c-32);
    return 0;
}
