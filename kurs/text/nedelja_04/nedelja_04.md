---
title: Primena petlji u obradi ulaza sa konzole
author: RAF
---


## getchar() i putchar()

Pored funkcija scanf i printf za učitavanje podataka sa konzole, odnosno standardnog ulaza i ispis podataka na konzolu odnosno standardnog izlaz u C-u postoje i druge funkcije koje čitaju i ispisuju na konzolu. 

Funkcija getchar čita jedan karakter sa konzole, vraća tip int koji predstavlja ASCII kod karaktera, a nema ulaznih parametara. 

```r
int getchar(void)
``` 

Funkcija putchar ispisuje jedan karakter na konzolu, ima jedan ulazni parametar tipa int koji je ASCII kod karaketra i ima isti taj karaketer (ASCII kod) kao povratnu vrednost. 

```r
int putchar(int c) 
``` 

Obe ove funkcije učitavaju i ispisuju po jedan kaarketer i da bi se pročitalo i ispisalo više karaktera pozivaju se u petlji i ovde će biti primenjeni za ilustraciju rada sa petljama u zadacima koji čitaju i obrađuju ulazni niz karaktera, na primer izbacuju, zamenjuju, filtriraju, dupliraju karaktere prema određenim pravilima, pronalaze neke zakonitosti ili nepravilnosti. 

Ako bismo hteli da napišemo program koji na osnovu ulaznog niza karaktera koji se unosi preko konzole, a koji se završava oznakom za novi red pravi izlazni niz karaktera koji sadrži samo brojeve iz ulaznog niza (iz ulaznog teksta izbaciti sve osim brojeva). Jedno rešenje ovog zadatka bi izgledalo ovako: 

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    while((ch = getchar()) != '\n'){
        if(ch>='0' && ch<='9')
            putchar(ch);
    }
    return 0;
}
``` 
Ovde imamo primer da u uslovu while naredbe učitavamo karaktere funkcijom getchar() i proverovamo jednakost tog karaktera sa oznakom za kraj reda (\n). Ukoliko uslov nije ispunjen, a to znači da nismo došli do kraja reda, ulazimo u blok naredbi. Blok naredbi sadrži if naredbu koja proverava da li je uneti karakter u rasponu ASCII karatera od '0' do '9', odnosno da li je u pitanju cifra i ako jeste karaketr se ispisuje na konzolu. 

Jedna stvar koja ovde može da zbuni je kako će program učitati ceo red karaktera, a zatim ispisati ceo red karaktera, kada se funkcije getchar() i putchar() pozivaju naizmenično. Odgovor leži u takozvanom baferovanju ulaznog skupa karaktera. Kada korisnik unosi karaktere preko konzole funkcija getchar "ne vidi" unete karaktere sve dok se ne unese ENTER. Tek kada se preko konzole unese ENTER, poziva se funkcija getchar() koja učitava redom unete karaktere. 

U drugom primeru potrebno je napisati program korićenjem while petlje koja iz ulaznog niza karaktera izbacuje sva dupla slova, odnosno ako dva ista slova stoje jedan pored drugog, ispisuje samo jedno, na primer za aabbdd, treba da ispiše adb. Jedno rešenje ovog zadatka je: 

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;
    char prethodniKarakter;
    prethodniKarakter = getchar();
    putchar(prethodniKarakter);
    while((karakter = getchar()) != '\n'){
        if(prethodniKarakter!=karakter)
            putchar(karakter);
        prethodniKarakter = karakter;
    }
    return 0;
}
```

U rešenju ovog zadatka čitamo ulazni niz karaktera i poredimo dva susedna slova, zbog toga imamo dve promeljive tipa char koje označavaju prethodni karakter i trenutni karakter koji se posmatrama. Prvi karakter ćemo ispisati nakon učitavanja (jer on sigurno nije jednak sa prethodnim, jer ni nema prethodnog), to je pre izvršavanja while naredbe i to će nam biti prvi prethodni karakter. U while naredbi proveravamo da li je trenutni karakter različit od prethodnog i samo ako jeste ispisujemo ga. Uslov za izlazak iz while petlje je učitavanje karaktera za kraj reda. 

Ovaj zadatak se može uraditi i na drugi način korišćenjem naredbe continue.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;
    char prethodniKarakter;
    prethodniKarakter = getchar();
    putchar(prethodniKarakter);
    while((karakter = getchar()) != '\n'){
        if(prethodniKarakter==karakter)
            continue;
        putchar(karakter);
        prethodniKarakter = karakter;
    }
    return 0;
}
```

U ovom rešenju u while petlji pitamo da li je trenutni karakter jednak sa prethodnim i ako jeste pozivamo naredbu continue koja će preskočiti sve naredbe iza continue, a to znači i naredbu koja ispisuje karakter, što znači da će duplirani karaketer biti preskočen i neće biti ispisan. Naredbom continue vraćamo se ponovo na ispitivanje uslova petlje.  


