
/*
  Napisati program koji odredjuje ostatak pri deljenju broja
  a sa brojem b bez koriscennja operacija / i %.
*/

#include <stdio.h>

int main()
{
  int a,b;
    scanf("%d %d", &a,&b);
    while (a-b>=0) a=a-b;
    printf("%d ", a);
    return 0;
}
