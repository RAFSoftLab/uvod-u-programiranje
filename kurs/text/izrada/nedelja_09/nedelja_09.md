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



## Stringovi kao pokazivači
