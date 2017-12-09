---
title: Strukture, fajlovi
author: RAF
---

## Strukture

Ranije smo videli da je niz koncept koji nam omogućava da napravimo kolekciju podataka istog tipa. Strukture u C-u nam omogućavaju da napravimo nove tipove podataka koji predstavljaju kolekciju podataka različitog tipa. 
Sintaksa kojom se kreira struktura je

```
struct [oznaka_strukture]{
   definicija jednog člana strukture;
   definicija jednog člana strukture;
...
} ;
```

Imamo rezervisanu reč struct iza koje se može (a ne mora, uglaste zagrade predstavljaju oznaku da neki deo deklaracije može, ali ne mora da se navede) navesti oznaka strukure, odnono naziv tipa podataka koji označava struktura. Zatim se u vitičastim zagradama navodi niz definicija elemenata strukture, koja se sastoji od tipa i naziva. 

Primer jedne definicije strukture:

```c
struct Student{
    char ime[50];
    char prezime[50];
    int brojPoena;
};
```

Ovde je definisana struktura Student koji sadrži tri podatka, ime, prezime i broj poena. Prva dva podatka su stringovi, a treći je broj. 

Strukture se najčešće definišu na početku, pre funckije main, i koriste se u funkciji main i u drugim funkcijama.  Svaka struktura je poseban tip podataka i mogu se deklarisati promenljive tipa strukture (strukturne promenljive) i u okviru tih promenljivih može se pristupati pojedinačnim elementima strukture, mogu im se dodeljivati, čitati i menjati vrednosti i mogu se koristiti u izrazima. 

Na primer:
struct Student s1 = {"Pera", "Peric", 30}; - deklariše novu promenljivu tipa student i dodeljuje vrednosti redom za svaki element strukture. 

Pojedinačnim elementima strukture pristupa se korišćenjem tačke, na sledeći način:

nazivPromenljive.nazivElementa

Na primer:
```c
s1.brojPoena = 35;
gets(s1.ime);
printf("%s %s %d", s1.ime, s1.prezime, s1.brojPoena);
```
## Definicija tipa - typedef

Strukture se često koriste zajedno sa oznakom za definiciju tipa typedef. Reč typedef se koristi u C-u za definisanje novih tipova na osnovu postojećih i preimenovanje tipa, na primer:

```c
typedef int ceo_broj;
```

uvodi novo ime ceo_broj za tip podataka int. Posle ovakve definicije možemo da deklarišemo promenljivu na sledeći način:

```c
ceo_broj br; 
```
Ako se koristi sa strukturom, reč typedef uvodi novi tip podataka strukture. Sledećom naredbom uvodi se tip podataka Student:

```c
typedef struct{
        char ime[50];
        char prezime[50];
        int brojPoena;
}Student;
```

Posle ovoga deklaracija promenljivih tipa student se navodi bez reči struct, primer:

Student s1,s2;

## Struktura u strukturi

Elementi strukture mogu biti nove strukture, na primer ako hoćemo da studentu dodamo adresu koja će imati poseban podatak o ulici, broju i mestu, to bismo uradili na sledeći način: 

```c
struct Adresa{
    char ulica[200];
    char broj[10];
    char mesto[100];
};
```
```c
struct Student{
        char ime[50];
        char prezime[50];
        int brojPoena;
        struct Adresa adresa;
};
```

Jedan od elemenata strukture student je nova struktura adresa. Pristup elementima adrese (unutrašnje strukture) implementira se sa s1.adresa.broj. 

## Strukture i funkcije



