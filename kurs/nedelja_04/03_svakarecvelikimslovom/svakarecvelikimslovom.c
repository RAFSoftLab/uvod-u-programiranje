/*
    Napisati program kojim se ispisuje uneti tekst tako da svaka rec pocinje velikim slovom.
*/
#include <stdio.h>

int main() {
    char c, last;
    c = getchar();
    if ( (c >= 'a') && (c <= 'z') ) c = c - 'a' + 'A';
    putchar(c);
    last = c;
    while (c != '\n') {
        c = getchar();
        if (last == ' ') {
            if ( ( c >= 'a') && (c <= 'z') ) c = c - 'a' + 'A';
        }
        putchar(c);
        last = c;
    }
    return 0;
}
