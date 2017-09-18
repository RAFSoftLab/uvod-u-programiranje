#include <stdio.h>

int main(){
    int godina;
    scanf("%d",&godina);

    if(godina%400 == 0 || (godina%4 == 0 && godina%100 != 0)){
        printf("DA");
    }else{
        printf("NE");
    }

    return 0;
}
