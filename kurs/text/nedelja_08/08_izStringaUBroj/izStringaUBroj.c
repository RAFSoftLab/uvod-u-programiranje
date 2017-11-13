#include <stdio.h>

char cifra_stotina(int ascii){
    return ascii < 100 ? '0' : '0' + ascii / 100;
}
char cifra_desetica(int ascii){
    return ascii < 10 ? '0' : '0' + (ascii / 10) % 10;
}
char cifra_jedinica(int ascii){
    return '0' + ascii % 10;
}


int main(){
    char s[100];
    char t[100];
    gets(s);
    int i = 0;
    int j = 0;
    while(s[i]){
        int ascii = (int)s[i];
        t[j++] = cifra_stotina(ascii);
        t[j++] = cifra_desetica(ascii);
        t[j++] = cifra_jedinica(ascii);
        i++;
    }
    t[j] = '\0';
    puts(t);

}
