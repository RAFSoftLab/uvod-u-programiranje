#include <stdio.h>
/*
    Napisati program koji ulaz sa tastature ispisuje na ekranu kao tekst šifrovan Cezarovom šifrom.
*/
int main()
{
    char c;
    while ((c=getchar())!='\n') {
        if ((c>='a') && (c<='z')) {
            c+=3;
            if (c>'z') c-=26;
        }
        if ((c>='A') && (c<='Z')) {
            c+=3;
            if (c>'Z') c-=26;
        }

        putchar(c);

    }
    return 0;
}
