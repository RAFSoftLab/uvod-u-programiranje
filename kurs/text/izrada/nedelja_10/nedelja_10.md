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

Imamo rezervisanu reč struct iza koje se može (a ne mora, uglaste zagrade predstavljaju oznaku da neki deo deklaracije može, ali ne mora da se navede) navesti oznaka strukure, odnosno naziv tipa podataka koji označava struktura. Zatim se u vitičastim zagradama navodi niz definicija elemenata strukture, koja se sastoji od tipa i naziva. 

Primer jedne definicije strukture:

```c
struct Student{
    char ime[50];
    char prezime[50];
    int brojPoena;
};
```

Ovde je definisana struktura Student koji sadrži tri podatka, ime, prezime i broj poena. Prva dva podatka su stringovi, a treći je broj. 

Strukture se najčešće definišu na početku, pre funckije main, i koriste se u funkciji main i u drugim funkcijama. Svaka struktura je poseban tip podataka i mogu se deklarisati promenljive tipa strukture (strukturne promenljive) i u okviru tih promenljivih može se pristupati pojedinačnim elementima strukture, mogu im se dodeljivati, čitati i menjati vrednosti i mogu se koristiti u izrazima. 

Na primer:
struct Student s1 = {"Pera", "Peric", 30}; - deklariše novu promenljivu tipa strukture Student i dodeljuje vrednosti redom za svaki element strukture. 

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

```c
Student *student_pok;
```
Pokazivaču na strukturu može se dodeliti vrednost adrese neke promenljive koja je tipa student:

```c
Student s1;
student_pok = &s1;
```

Elementima strukture se može prisupiti preko pokazivača korišćenjem operatora -> na sledeći način:

```
student_pok->ime
```

Drugi način za pristup elementu strukture preko pokazivača je (&ast;student_pok).ime, ali ovaj način se mnogo ređe koristi. 

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

```c
typedef struct {
    char *ime;
    char *prezime;
    int brojPoena;
} Student;	
```

## Strukture i nizovi

Mogu se definisati nizovi čiji su elementi tipa strukture, na primer: 

```c
Student studenti[10];
```

Dodela vrednosti prvom elementu niza vrši se na sledeći način:

```c
strcpy(studenti[0].ime, "Petar");
strcpy(studenti[0].prezime, "Petrovic");
studenti[0].brojPoena = 30;
```
Elementima niza možemo dodeliti vrednosti i korišćenjem pokazivača na sledeći način, navedeni primer dodeljuje vrednost drugom elementu niza studenti:

```c
strcpy((studenti+1)->ime, "Milica");
strcpy((studenti+1)->prezime, "Pavlovic");
(studenti+1)->brojPoena = 50;
```
## Rad sa fajlovima

Svi podaci sa kojima smo do sada radili u programima su smeštani u operativnu memoriju računara i trajali su najduže koliko i sam program. Kada program završi sa radom, vrednost svih promenljivih se gubi. Ukoliko želimo na nam neki podaci ostanu sačuvani i posle izvršavanja programa moramo ih smestiti na hard disk, a jedan način da to uradimo je da ga snimimo u fajl (datoteku). 

Fajl predstavlja sekvencu bajtova i može biti tekstualni ili binarni. 

Za rad sa fajlovima u C-u koriste se pokazivači. Fajl je predstavljen posebnim pokazivačem na sledeći način:

```c
FILE * fp;
```
Pokazivač se ovde može tumačiti kao memorijska lokacija fajla na disku. 

Funkcije za rad sa fajlovima uvoze se iz standardne IO (input-output) biblioteke i sastoje se od funkcija za otvarenje i zatvaranje fajla, od funkcija za čitanje podataka iz fajla i funkcija za pisanje u fajl. 

## Otvaranje i zatvaranje fajla

Da bi se fajl koristio u programu potrebno ga je prvo otvoriti. Funkcija za otvaranje fajla u C-u je: 

```c
FILE * fopen(char *fname, char*mode) 
```

Funkcija za otvaranje fajla vraća NULL pokazivač ako fajl ne može da se otvori. Kao parametri se prosleđuju putanja do fajla i mod u kom se fajl otvara. Putanja do fajla može biti relativna ili apsolutna putanja. Relativna putanja se zadaje  u odnosu na direktorijum u kom se nalazi program koji se izvršava (fajl u kom je kompajliran program). Kod navođenja relativnih putanja koriste se oznake za roditeljski folder (..) i tekući folder (.). 

Apsolutna putanje je cela putanja do fajla, počev od oznake diska na kojoj se nalazi fajl. Za razdvajanje foldera koristi se oznaka '/' ili '\\'. 

Primeri:
<ul>
<li>fp = fopen("../temp/proba.txt", "w"); - relativna putanja koja počinje od roditeljskog foldera</li> 
<li>fp = fopen("./temp/proba.txt", "w"); - relativna putanja koja počinje od tekućeg foldera</li>
<li>fp = fopen("D:/temp/proba.txt", "w"); - apsolutna  putanja</li> 
</ul>

Parametar koji predstavlja mod u kom se fajl otvara  može imati neku od sledećih vrednosti:
<ul>
<li>r - otvaranje postojećeg fajla za čitanje podataka,</li>
<li>w - otvaranje fajla za pisanje, ako ne postoji fajl kreira se novi, ako postoji , pisanje počinje od početka (briše se postojeći sadržaj),</li> 
<li>a - otvaranje postojećeg fajla za dodavanje sadržaja na postojeći sadržaj,</li> 
<li>r+ - otvaranje postojećeg fajla za čitanje i pisanje,</li> 
<li>w+ -  otvaranje fajla za čitanje i pisanje, ukoliko fajl postoji, prvo mu se dužina smanjuje na nulu, ako fajl ne postoji, kreira se novi fajl,</li>  
<li>a+ -  otvaranje fajla za čitanje i pisanje, čitanje se vrši od početka fajla, a pisanje u fajl se nastavlja na postojeći sadržaj, ukoliko fajl ne postoji krera se novi.</li> 
</ul>

Po završetku rada sa fajlom potrebno je zatvriti fajl, što se postiže sledećom funkcijom:

```c
int fclose(FILE *fp ); 
```
Pozivom ove funkcijom se prazni bafer koji je služio za ispis u fajl (sav zaostali sadržaj se upisuje u fajl), oslobađa se operativna memorija koje je korišćena za obradu fajla. Ukoliko funkcija uspešno završi snimanje u fajl vraća se 0, inače se vraća definisana konstanta EOF. 

## Ispis u fajl

Tekst se u fajl  može upisati tako što upišemo pojedinačni karakter ili string. Funkcije kojima se ovo implementira su:
int fputc(int c, FILE &ast;fp ); - upisuje karakter u fajl,
int fputs(char &ast;s, FILE &ast;fp ); - upisuje string u fajl,
int fprintf(FILE &ast;fp, char &ast;format,...) - upisuje formatirani string u fajl (slično kao printf, moguće je ubacivanje vrednosti preko parametara sa znakom %).

Na sledećem listingu dat je primer programa koji otvara fajl mojFajl.txt za pisanje, upisuje u njega string i zatvara fajl. Kod zatvaranja i otvaranja fajla proverava se uspešnost i ispisuje poruka.  

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("mojFajl.txt", "w");  // relativna putanja do fajla
    if(fp!=NULL){                     
        printf("Fajl je uspesno otvoren.\n");
        fputs("Ispis", fp);
    }else{
        printf("Greska.\n");
    }
    if(fclose(fp)!=EOF){
        printf("Fajl je uspesno zatvoren.\n");
        exit(0);
    }else
        exit(1);
}
```

## Argumenti komandne linije

Argumenti komandne linije se prosleđuju programu prilikom poziva u konzoli operativnog sistema. Argumentima komandne linije u C-u može se pristupiti preko argumenata funkcije main. Funkcija main se može implementirati sa sledećim zaglavljem:

```c
int main(int argc, char *argv[])
```
Prvi argument sadrži broj argumenata komandne linije, a drugi argument funkcije main je niz koji sadrži vrednosti argumenata komandne linije. 
Na sledećem listingu dat je program koji ispisuje vrednosti argumenata komandne linija

```c
int main(int argc, char* argv[]){
    int i;
    for(i=0;i<argc;i++){
        puts(argv[i]);
    }
    return 0;
}

```

Prvi argument komandne linije je uvek naziv programa, tako da se prvi argument koji je prosleđen programu čita sa argv[1]. 





