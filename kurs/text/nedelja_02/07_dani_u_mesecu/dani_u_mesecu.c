#include <stdio.h>

int main(){
    int mesec,godina;

    scanf("%d%d", &mesec,&godina);

    switch (mesec) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        case 2:
            if(godina%400==0 || (godina%4==0 && godina%100!=0))
                printf("29");
            else
                printf("28");
            break;
    }

    return 0;
}
