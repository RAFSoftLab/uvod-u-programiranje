#include <stdio.h>

int main(){
    int sekunde;
    int sati;
    int minuti;

    scanf("%d", &sekunde);

    sati = sekunde / 3600;
    sekunde %= 3600;
    minuti = sekunde / 60;
    sekunde %= 60;

    printf("%d %d %d", sati, minuti, sekunde);

    return 0;
}
