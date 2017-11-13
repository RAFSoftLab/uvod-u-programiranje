---
title: Nizovi
author: RAF
---

## Tip podataka niz

Nizovi su specijalni tipovi podataka koji predstavljaju kolekciju promenljivih istog tipa. Ta kolekcija je najčešće fiksne, unapred definisane veličine.

Umesto da definišemo više promenljivih na primer broj0, broj1, broj2, broj3,..broj99, možemo definisati niz pod imenom nizBrojeva veličine 100 čiji su elementi brojevi. U tom slučaju elementima niza pristupamo sa nizBrojeva[0], nizBrojeva[1],... nizBrojeva[99]. Brojevi u uglastoj zagradi nazivaju se indeksi. Prvi element niza ima indeks 0. Elementi niza mogu se u programu koristiti kao i bilo koja druga promenljiva. Može im se dodeliti ili ispisati vrednost, mogu se koristiti kao operandi u operacijama, mogu se prosleđivati kao argumenti funkcija. 

Niz je u memoriji predstavljen kao sekvenca susednih memorijskih lokacija. 

## Deklaracija niza

Nizovi se u programima deklarišu na sledeći način:

```
tip imeNiza [velicinaNiza]
```

Ovo je primer deklaracije jednodimenzionalnog niza, mogu se deklarisati i nizovi većih dimenzija o čemu će biti reči u sledećoj temi.

Veličina niza se izražava pozitivnim celim brojem, i ne može bit nula. Tip predstavlja tip podataka elemanata niza i može biti bilo koji tip koji postoji u programskom jeziku C. Veličina niza označava koliko će se memorijskog prostora rezervisati za promenljivu i on je jednak proizvodu veličine niza i memorije potrebne za skladištenje tipa koji predstavlja tip elementa niza.

Primer deklaracije niza veličine 10 čiji elementi su tipa double:

```
double niz[10]. 
```
Ova deklaracija će rezervisati 10 X 8 = 80 bajtova memorije (veličina tipa double je 8 bajtova).

## Inicijalizacija niza

Inicijalizacija niza predstavlja dodelu vrednosti elementima niza. Inicijalizacija se može vršiti na dva načina, dodela vrednosti svim elementima niza odjednom i dodela vrednosti jednom po jednom elementu. 

Svim elementima niza vrednost se dodeljuje navođenjem vrednosti u vitičastim zagradama razdvojenih zarezom, kao na primer
```
double niz[5] = {100.0, 2.0, 5.0, 4.0, 6.0};
```
Broj elemenata u vitičastoj zagradi mora biti jednak ili manji od zadate veličine niza. Ukoliko je broj dodeljenih vrednosti manji od veličine niza, na preostala mesta postavljaju se podrazumevane vrednosti koje zavise od tipa, na primer za int je to 0, za float i double 0.0. 

Moguće je dodeliti elemente nizu bez zadavanje veličine niza:
```
double niz[] = {100.0, 2.0, 5.0, 4.0, 6.0};	
```

Ovom naredbom kreira se niz čija veličina odgovara broju dodeljenih elemenata.

Dodela vrednosti jednom elementu niza izgleda ovako:
```
niz[4] = 23.0;
```

Ova naredba dodeljuje vrednost petom elementu niza (indeks uvek ide od 0, dok poslednji element niza ima indeks za jedan manji od dužine niza). 

Na sledećem listingu prikazan je primer programa koji ilustruje dodelu vrednosti elementima niza i ispis elemanata niza. Za obradu nizova najčešće se koristu for petlja sa brojačem i koji redom uzima vrednosti indeksa niza, znači počinje od 0 i ide do veličine-1 (uslov je i<velicinaNiza).  

```c
#include <stdio.h>

int main () {
   int niz[10]; /* deklarisemo niz od 10 integera */
   int i,j;
   /* inicijalizacija vrednosti elemenata niza */
   for (i = 0; i<10; i++) {
      niz[i] = i + 100; /* dodela vrednosti i-tom elementu*/
   }

   /* ispis vrednosti elemenata niza*/
   for (j = 0; j < 10; j++ ) {
      printf("niz[%d] = %d\n", j, niz[j] );
   }
   return 0;
}
```




