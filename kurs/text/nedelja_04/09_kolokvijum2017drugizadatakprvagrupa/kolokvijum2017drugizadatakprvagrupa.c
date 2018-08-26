#include <stdio.h>
#include <stdlib.h>


int main()
{
    char c,prethodni;
    int zbir = 0, trenutniBroj = 0;
    while ((c = getchar())!='\n') {
        if (c>='0' && c<='9') trenutniBroj = trenutniBroj*10 + c - '0';
        else{
            if (c==prethodni || c+32==prethodni || c-32==prethodni) zbir+=trenutniBroj;
            trenutniBroj = 0;
            prethodni = c;
        }
    }
    printf("%d", zbir);
    return 0;
}
