#include <stdio.h>
#include <string.h>

int izdvojReci(char ulaz[], char reci[][100]) {
    char *token;
    token=strtok(ulaz," ");
    strcpy(reci[0],token);
    token=strtok(NULL," ");
    int brojac=1;
    while (token!=NULL) {
        strcpy(reci[brojac],token);
        brojac++;
        token=strtok(NULL," ");
    }
    return brojac;
}

void izbaciReci(char ulaz[], char reci[][100], int flagovi[],int brojac) {
    int i,j,k;
    for (i=0;i<brojac;i++) flagovi[i]=1;
    for (i=0;i<brojac;i++) {
        int x=0;
        for (j=i+1;j<brojac;j++) {
            if (strcmp(reci[i],reci[j])==0) {
                flagovi[j]=0;
                x=1;
            }
        }
        if (x==0) flagovi[i]=0;
    }
}

void popuniIzlaz(char izlaz[],char reci[][100],int flagovi[], int brojac) {
    if (flagovi[0]) strcat(izlaz,reci[0]);
    int i;
    for (i=1;i<brojac;i++) {
        if (flagovi[i]) {
            strcat(izlaz," ");
            strcat(izlaz,reci[i]);
        }
    }
}

int main()
{
    char ulaz[1000];
    char reci[100][100];
    char izlaz[1000]="";
    int flagovi[100];
    gets(ulaz);
    int brojac=izdvojReci(ulaz,reci);
    izbaciReci(ulaz,reci,flagovi,brojac);
    popuniIzlaz(izlaz,reci,flagovi,brojac);
    strcpy(ulaz,izlaz);
    puts(ulaz);
    return 0;
}
