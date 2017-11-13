/*
    Napisati program koji izbacuje samoglasnike iz teksta sa ulaza
*/
#include <stdio.h>

int main()
{
    char c;
    while ((c=getchar())!=EOF) {
        if (c!='a' && c!='e' && c!='i' && c!='a' && c!='o' && c!='u' && c!='a' && c!='A' && c!='E' && c!='I' && c!='O' && c!='U') putchar(c);
    }
    return 0;
}
