#include <stdio.h>
#include <math.h>

int main(){
    int broj, obrnut;
    int cj, cd, cs, ch;

    scanf("%d",&broj);
    cj = broj%10;
    cd = (broj/10)%10;
    cs = (broj/100)%10;
    ch = (broj/1000)%10;

    obrnut = cj*1000 + cd*100 + cs*10 + ch;

    if(broj == obrnut){
        printf("DA");
    }else{
        printf("NE");
    }

    return 0;
}
