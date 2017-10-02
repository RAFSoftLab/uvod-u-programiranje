
Napisati funkciju pom(int arg, int k) koja vraća broj dobijen kada se iz argumenta arg uklone sve cifre manje od k (vratiti nula ako se izbace sve cifre). Sabrati brojeve koje vraća ova funkcija za 3 broja koja korisnik unese, i za k=5.

## Opis ulaza

  - Preko standardnog ulaza korisnik unosi tri cela broja A,B i C. (A,B,C>0)

## Opis izlaza

  - Na standardi izlaz ispisuje se zbir brojeva A1,B1,C1(A1 je broj koji se dobija kada se iz broja A izbace sve cifre manje od 5, analogno je i za B1 i C1).

## Primer 1

### Ulaz

~~~
761 128 10
~~~

### Izlaz

~~~
84
~~~

## Primer 2

### Ulaz

~~~
841 137 229
~~~

### Izlaz

~~~
24
~~~

## Objašnjenje primera 1

Prva linija standardnog ulaza označava da korisnik unosi A=761 B=128 i C=10. Kada se iz broja A izbace sve cifre koje su manje od 5 dobija se broj A1=76, analogno B1=8 i C1=0 (jer su obe cifre manje od 5). Zbir A1+B1+C1=84, pa je potrebno ispisati na standardnom izlazu 84.
