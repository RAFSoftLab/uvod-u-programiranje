#include <stdio.h>
#include <stdlib.h>

void izbrisiKaraktere(char* S, char* T) {
    int i, j, sadrzi, novaduzina = 0, n, nt;
    n = strlen(S);
    nt = strlen(T);
    for (i = 0; i < n; i++) {
        sadrzi = 0;
        for (j = 0; j < nt; j++)
            if (T[j] == S[i]) {
                sadrzi = 1;
                break;
            }
        if (!sadrzi) {
            S[novaduzina++] = S[i];
        }
    }
    S[novaduzina] = '\0';
}

int main()
{
    char s[100]; char t[100];
    gets(s);
    gets(t);
    izbrisiKaraktere(s,t);
    puts(s);
    return 0;
}
