/*
    Napisati program kojim se unosi tekst. Potrebno je izbaciti iz teksta zagrade i sve sto je u njima.
*/
#include <stdio.h>

int main() {
    char c;
    int flag = 0;
    c = getchar();
    if (c=='(') flag=1;
    else putchar(c);
    while (c != '\n') {
        c=getchar();
        if ( (flag == 0) && (c != '(') && (c != ')')) putchar(c);
        if  (c == '(') flag = 1;
        if  (c == ')') flag = 0;
    }
    return 0;
}
