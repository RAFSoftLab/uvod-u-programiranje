#include <stdio.h>
#include <stdlib.h>


void pomeriUDesno(char *s, int poz) {
    int n = strlen(s);
    s[n+1]='\0';
    int i;
    for (i = n ;i>poz;i--) s[i] = s[i-1];
}

void formirajNovi(char *s) {
    int i;
    for (i = 1 ; i<strlen(s); i++) {
        if (s[i]!=s[i-1] && s[i]!='-' && s[i-1]!='-') {
            pomeriUDesno(s,i);
            s[i]='-';
        }
    }
}


int main()
{
    char s[100];
    gets(s);
    formirajNovi(s);
    puts(s);
    return 0;
}
