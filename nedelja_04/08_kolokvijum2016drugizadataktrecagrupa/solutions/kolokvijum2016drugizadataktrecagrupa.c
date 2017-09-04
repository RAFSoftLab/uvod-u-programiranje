#include <stdio.h>

/*
    Koristeci naredbu while i funkciju getchar() za citanje karaktera
    obraditi ulaznu sekvencu slova tako da se izbroji broj susednih pojavljivanja slova
    (broje se i mala i velika slova kao jednaka) i ispise na odgovarajuci nacin.

    ulaz: AAababbBBCc
    izlaz: A3B1A1B4C2
*/
int main() {
    char c, last;
    c = getchar();
    last = c;
    int broj = 0;
    while (c != '\n') {
        if ( (c >= 'a') && (c <= 'z') ) c=c-'a'+'A';
        if (c == last) broj++;
        else {
            putchar(last);
            printf("%d", broj);
            broj = 1;
            last = c;
        }
        c = getchar();
    }
    putchar(last);
    printf("%d", broj);
    return 0;
}
