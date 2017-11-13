#include <stdio.h>
#include <stdlib.h>

void izbaciPraznine(char* s) {

    int i, j, novaduzina = 0, n;
    n = strlen(s);
    for (i = 0; i < n; i++) {
        if (s[i]!=' ' && s[i]!='\t') {
            s[novaduzina++] = s[i];
        }
    }
    s[novaduzina] = '\0';
}

int main()
{
    char s[1000];
    gets(s);
    izbaciPraznine(s);
    printf("%s",s);
    return 0;
}
