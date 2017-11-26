#include <stdio.h>
#include <stdlib.h>


void podstringovi(char* s) {
    int levagranica, desnagranica, k, n;
    n = strlen(s);
    for (levagranica = 0; levagranica < n; levagranica++)
        for (desnagranica = levagranica; desnagranica < n; desnagranica++) {
            for (k = levagranica; k <= desnagranica; k++) putchar(s[k]);
            putchar('\n');
        }
}

int main()
{
    char s[1000];
    gets(s);
    podstringovi(s);
    return 0;
}
