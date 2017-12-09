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

Strukture se mogu prosleđivati kao argumenti funkcije i mogu biti povratne vrednosti funkcija. Na sledećem listingu prikazan je primer programa u kome imamo definisan tip strukture pod imenom Student i dve funkcije. Funkcija ispisiStudent kao parametar prima tip Student i ispisuje vrednosti svih elemenata strukture. Funkcija kreiraj vraća povratnu vrednost tipa Student, a kao argumente uzima pojedničane vrednosti elemenata strukture.  

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char ime[50];
    char prezime[50];
    int brojPoena;
}Student;

void ispisiStudent(Student s);
Student kreiraj(char ime[], char prezime[], int brojPoena);

int main()
{
    Student s1, s2;
    strcpy(s1.ime, "Petar");
    strcpy(s1.prezime, "Peric");
    s1.brojPoena = 30;
    printf("Student 1:\n");
    ispisiStudent(s1);
    s2 = kreiraj("Bojan","Milosevic",45);
    printf("Student 2:\n");
    ispisiStudent(s2);
    return 0;
}

void ispisiStudent(Student s){
    printf("Ime studenta: %s\n",s.ime);
    printf("Prezime studenta: %s\n", s.prezime);
    printf("Broj poena %d\n", s.brojPoena);
}

Student kreiraj(char ime[50], char prezime[50], int brojPoena){
    Student s;
    strcpy(s.ime, ime);
    strcpy(s.prezime, prezime);
    s.brojPoena = brojPoena;
    return s;
}
```
## Strukture i pokazivači

Mogu se definisati pokazivači na strukture, na isti način kao pokazivači na bilo koji drugi tip promenljive. Na primer, sledećom naredbom definisana je promenljiva student_pok koja predstavlja pokazivač na podatak koji je tipa strukture Student:

Student **student_pok;

Pokazivaču na strukturu može se dodeliti vrednost adrese neke promenljive koja je tipa student:

```
Student s1;
student_pok = &s1;
```

Elementima strukture se može prisupiti preko pokazivača korišćenjem operatora -> na sledeći način:

```
student_pok->ime
```

Drugi način za pristup elementu strukture preko pokazivača je (*student_pok).ime, ali ovaj način se mnogo ređe koristi. 

Na sledećem listingu prikazan je primer programa koji koristi pokazivač na tip strukture Student. 

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ime[50];
    char prezime[50];
    int brojPoena;
}Student;

int main()
{
    Student *student_pok;
    Student s1;
    strcpy(s1.ime, "Petar");
    strcpy(s1.prezime, "Peric");
    s1.brojPoena = 30;
    student_pok = &s1;
    printf("%s %s %d", student_pok->ime, student_pok->prezime, student_pok->brojPoena);
    return 0;
}
```

Elementi strukture mogu biti pokazivači, na primer istu strukturu Student možemo deklarisati na sledeći način: 

typedef struct {
    char **ime;
    char **prezime;
    int brojPoena;
} Student;	

Ovde smo stringove definisali preko pokazivača. Ovako definisana struktura omogućava da dodelimo vrednost stringa klasično:

Student s1;
s1.ime = "Marko";



