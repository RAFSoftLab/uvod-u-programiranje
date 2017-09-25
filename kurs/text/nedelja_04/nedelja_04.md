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







