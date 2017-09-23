/*
    Napisati program koji izbacuje svo pojavljivanje cifre CF u broju N
*/

#include <stdio.h>

int main()
{
    int n, c, cf, n1 = 0, osnova=1;
    scanf("%d %d", &n, &cf);
    while (n>0) {
        c=n%10;
        if (c != cf) {
            n1 = n1 + osnova * c;
            osnova *= 10;
        }
        n /= 10;
    }
    printf("%d\n", n1);
    return 0;
}
