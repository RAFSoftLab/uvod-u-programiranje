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

Obe ove funkcije učitavaju i ispisuju po jedan kaarketer i da bi se pročitalo i ispisalo više karaktera pozivaju se u petlji i ovde će biti primenjeni za ilustraciju rada sa petljom u zadacima koji ulazni niz karaktera obrađuju (na primer izbacuju, zamenjuju, dupliraju karaktere prema određenim pravilima) i ispisuju. 





