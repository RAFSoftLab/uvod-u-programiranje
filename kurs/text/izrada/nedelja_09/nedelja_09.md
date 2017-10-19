---
title: Stringovi
author: RAF
---

## Deklaracija i inicijalizacija stringova

Stringovi u C-u su jednodimenzionalni nizovi karaktera, čiji je poslednji element null karakter, odnosno karakter sa rednim brojem 0 u ASCII tabeli. 

Stringovi se i deklarišu kao nizovi karaktera

```
char str[7];
```
a može im se dodeliti vrednost na dva načina:

char str[7] = {'Z', 'd', 'r', 'a', 'v', 'o', '\0'};  -  poslednji element mora biti null karakter
char str[7] = "Zdravo"; - string je niz karaktera u dvostrukim navodnicima, kod ovog slučaja kompajler će napraviti niz od 7 karaktera,   od kojih će prvih 6 biti popunjeno vidljivim karakterima koji su dodeljeni stringu, a na poslednje mesto će se postaviti null karakter.  

Ovde možemo primetiti da je veličina niza jednaka duzini stringa plus jedan. 

Kao i svakom nizu i stringu se može dodeliti vrednost pojedinačnog elementa po indeksu, na primer

```
str[1] = 'a'
```

## Ispis i učitavanje stringova

String se može ispisati na sistemski izlaz pozivom funkcije printf koja kao parametar prima string

```
printf(str);
```
A string se može umetnuti u ispis nekog drugog stringa korišćenjem znaka %s

```
printf("Pozdrav: %s", str);
```
Učitavanje stringa preko sistemskog ulaza može se izvršiti funkcijom scanf("%s", str), međutim, ova funkcija čita samo jednu reč, odnosno čita string samo do unetog praznog karaktera (space). Ovo naravno nije dovoljno i potrebno je realizovati funkcionalnost čitanja celog stringa, najčešće do kraja reda (\n) ili oznake EOF (end of file). 

Ova funkcionalnost bi se mogla implementirati korišćenjem funkcije getchar za čitanje jednog po jednog karaktera i smetanje u niz. Program koji ovo implementira prikazan je na sledećem listingu. 
```c
#include <stdio.h>
int main(){
    char str[30],ch;
    int i=0;
    printf("Unesite string: ");
    while(ch!='\n'){
        ch=getchar();
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("Uneti string: %s", str);
    return 0;
}
```
U ovom programu se u jednoj while petlji učitavaju karakteri funkcijom getchar() sve dok se ne naiđe na kraj reda, odnosno karakter \n. Svaki učitani karakter se smešta u niz karaktera koji predstavlja string, a na kraju se dodaje i null karakter. 

Pošto je funkcionalnost učitavanja stringa potrebna u mnogim programima, u programski jezik C kao deo biblioteke stdio ugrađene su funkcije za čitanje i ispis celog stringa, to su funkcije 

<ul>
<li>gets(str) - učitava ceo string str sa sistemskog ulaza,</li> 
<li>puts(str) - ispisuje string str na sistemski izlaz.</li>
</ul>

Primer programa koji učitava i ispisuje string korišćenjem ove dve funkcije:

```c
#include <stdio.h>
int main(){
    char str[30];    
    printf("Unesite string: ");
    gets(str);
    printf("Uneti string: ");
    puts(str);
    return 0;
}
```
## Stringovi kao parametri funkcija




## Ugrađene funkcije za rad sa stringovima

U C-u postoji veliki broj ugrađenih funkcija za rad sa stringovima koje se uvoze iz biblioteke string.h, neke od korisnih funkcija prikazane su u sledećoj tabeli. 

<table>
<thead><td>Funkcija</td><td>Značenje</td></thead>
<tr><td>strcpy(s1, s2)</td><td>kopira string s2 u string s1</td></tr>
<tr><td>strcat(s1, s2)</td><td>konkatenacija stringova, string s2 se dodaje na kraj stringa s1</td><tr>
<tr><td>strlen(s1)</td><td>vraća dužinu stringa s1, vraća se broj karaktera u stringu bez null karaktera</td></tr>
<tr><td>strcmp(s1, s2)</td><td>poređenje stringova, vraća 0 ako su s1 i s2 jednaki, manje od 0 ako je s1<s2 i veće od 0 ako je s1>s2</td></tr>
<tr><td>strchr(s1, ch)</td><td>vraća pokazivač na prvo pojavljivanje karaketar ch u string s1</td></tr>
<tr><td>strstr(s1, s2)</td><td>vraća pokazivač na prvo pojavljivanje stringa s2 u stringu s1</td></tr>
<tr><td>strlwr(s1)</td><td>sva slova u stringu s1 pretvara u mala slova</td></tr>
<tr><td>strupr(s1)</td><td>sva slova u stringu s1 pretvara u velika slova</td></tr>
</table>

Sledi program koji ilustruje korišćenje nekih od funkcija iz tabele.

```c
#include <stdio.h>
#include <string.h>

int main(){

   char str1[] = "Zdravo";
   char str2[] = "svima";
   char str3[12];
   int  duzina;

    /* kopira str1 u str3 */
   strcpy(str3, str1);
   printf("strcpy( str3, str1), str3 = %s\n", str3 );

   /* konkatenacija stringova str1 i str2 */
   strcat( str1, str2);
   printf("strcat( str1, str2), str1 = %s\n", str1 );

   /* duzina stringa str1 posle konkatenacije */
   duzina = strlen(str1);
   printf("strlen(str1) :  %d\n", duzina );
   return 0;
}
```

U ovom primeru vrši se kopiranje stringova, konkatenacija stringova i ispis dužine stringa. 

Stringovi str1 i str2 su inicijalizovani prikom deklaracije, a string str3 je samo deklarisan, ali mu se naredbom strcpy(str3, str1) dodeljuje vrednost stringa str1. Zatim se vrši konkatenacija stringova str1 i str2, tako da se string str2 dodaje na str1 i na kraju se pronalazi dužina stringa str1. Kada se ovaj program pokrene na sistemski izlaz se ispisuje:

```
strcpy(str3, str1), str3 = Zdravo
strcat(str1, str2), str1 = Zdravosvima
strlen(str1) :  11
```




