/*
    Napisati program kojim se ispisuje uneti tekst tako da svaka rec pocinje velikim slovom.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,last;
    last=' ';
    while ((c=getchar())!='\n') {
        if (last==' ') {
            if (c>='a' && c<='z') c=c-'a'+'A';
        }
        putchar(c);
        last=c;
    }
    return 0;
}
