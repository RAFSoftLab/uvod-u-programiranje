#include <stdio.h>
#include <math.h>

int main(){
    int broj;
    int cj, cd, cs;

    scanf("%d",&broj);
    cj = broj%10;
    cd = (broj/10)%10;
    cs = (broj/100)%10;

    if(broj == cj*cj*cj + cd*cd*cd + cs*cs*cs){
        printf("DA");
    }else{
        printf("NE");
    }

    return 0;
}
