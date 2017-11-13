#include <stdio.h>
#include <stdlib.h>

void podstringoviPoDuzini(char* S) {
    int levagranica, duzina, k, n;
    n = strlen(S);
    for (duzina = 1; duzina <= n; duzina++)
        for (levagranica = 0; levagranica + duzina <= n; levagranica++) {
            for (k = levagranica; k < levagranica + duzina; k++) putchar(S[k]);
            putchar('\n');
        }
}

int main()
{
    char s[100];
    gets(s);
    podstringoviPoDuzini(s);
    return 0;
}
