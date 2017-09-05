#include <stdio.h>

int main(){
    int sekunde;
    int sati;
    int minuti;

    printf("Unesite vremenski interval u sekundama: ");
    scanf("%d", &sekunde);

    sati = sekunde / 3600;
    sekunde %= 3600;
    minuti = sekunde / 60;
    sekunde %= 60;

    printf("%d %d %d\n", sati, minuti, sekunde);

    return 0;
}
