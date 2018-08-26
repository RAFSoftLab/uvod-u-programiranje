#include <stdio.h>
#include <stdlib.h>


void pomeriULevo(char *s, int poz) {
    int n = strlen(s);
    s[n+1]='\0';
    int i;
    for (i = poz ;i<n;i++) s[i] = s[i+1];
    s[n-1]='\0';
}
int nadjiPrvuCrtu(char *s, int pocetak) {
    int i;
    int n= strlen(s);
    for (i=pocetak;i<n;i++)
        if (s[i]=='-') return i;
    return n;
}

void formirajNovi(char *s) {
    int i,crta,j,k;
    for (i = 0 ; i<strlen(s); i++) {
        for (j=i;j<nadjiPrvuCrtu(s,i)-1;j++) {
            for (k = j+1;k<nadjiPrvuCrtu(s,i);k++) {
                if (s[j]==s[k]) {
                    pomeriULevo(s,k);
                    k--;
                }
            }
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
