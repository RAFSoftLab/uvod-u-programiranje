/*
    Napisati program koji izbacuje samoglasnike iz teksta sa ulaza
*/
#include <stdio.h>

int main() {
    char c, x;
    c = getchar();
    while (c != "\n") {
      if ( (c >= 'A') && (c <= 'Z'))  x = c + 'a'-'A';
      else                            x = c;
      if ( (x != 'a') && (x != 'e') && (x != 'i') && (x != 'o') && (x != 'u') ) putchar(c);
      c=getchar();
    }
    return 0;
}
