
Napisati program kojim se unosi tekst. Potrebno je izbaciti iz teksta zagrade i sve sto je u njima.

## Opis ulaza

  - Preko standardnog ulaza korisnik unosi tekst(sastavljen od malih i velikih slova engleskog alfabeta, razmaka i malih otvorenih i zatvorenih zagrada).

## Opis izlaza

  - Na standardi izlaz ispisuje se trazeni tekst.

## Primer 1

### Ulaz

~~~
ab(cde)ef(g)
~~~

### Izlaz

~~~
abef
~~~

## Primer 2

### Ulaz

~~~
dskjd (ds ) vv(d)
~~~

### Izlaz

~~~
dskjd  vv
~~~

## Objasnjenje primera 1

Prva linija standardnog ulaza oznacava da korisnik unosi tekst 'ab(cde)ef(g)' . Ukoliko se izbace zagrade, i karakteri koji se izmedju njih nalaze, dobija se tekst: abef, pa je to ono sto treba ispisati na standardnom izlazu.

## Napomena
Ne ocekivati slucajeve u kom su zagrade ugnjezdene-  (ab(cd)e)f.
