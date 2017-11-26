#include <stdio.h>
#include <stdlib.h>

void dupliraj(char* S) {
    int i, n;
    n = strlen(S);
    for (i = n - 1; i >= 0; i--) {
        S[2 * i] = S[2 * i + 1] = S[i];
    }
    S[2 * n] = '\0';
}
int main()
{
    char s[100];
    gets(s);
    dupliraj(s);
    puts(s);
    return 0;
}
