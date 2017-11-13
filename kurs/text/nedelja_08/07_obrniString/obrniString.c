#include <stdio.h>
#include <stdlib.h>

void obrni(char* s){
   int n=strlen(s);
   int i;
   char tmp;
   for (i=0;i<n/2;i++) {
      tmp=s[i];
      s[i]=s[n-i-1];
      s[n-i-1]=tmp;
   }
}


int main()
{
    char s[100];
    gets(s);
    obrni(s);
    puts(s);
    return 0;
}
