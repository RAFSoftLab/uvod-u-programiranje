#include <stdio.h>
#include <stdlib.h>

int brojPojavljivanja(char* S, char* T) {
    int i, n, ret = 0;
    n = strlen(S);
    for (i = 0; i < n; i++) {
        if (strstr(S + i, T) == S + i) {
            ret++;
        }
    }
    return ret;
}

int main()
{
    char s[100], t[100];
    gets(s);
    gets(t);
    int broj=brojPojavljivanja(s,t);
    printf("%d",broj);
    return 0;
}
