
Napisati program kojim se unosi tekst. Ispisati sve podstringove unetog teksta.

## Opis ulaza

  - Preko standardnog ulaza korisnik unosi tekst.

## Opis izlaza

  - Na standardi izlaz ispisuje se podstringovi unetog teksta, jedan ispod drugog. Podstringove ispisivati sa leve na desnu stranu. Redosled podstringova mora biti isti kao što je navedeno u primerima.

## Primer 1

### Ulaz

~~~
abcd
~~~

### Izlaz

~~~
a
ab
abc
abcd
b
bc
bcd
c
cd
d
~~~

## Primer 2

### Ulaz

~~~
abcde
~~~

### Izlaz

~~~
a
ab
abc
abcd
abcde
b
bc
bcd
bcde
c
cd
cde
d
de
e
~~~

## Objašnjenje primera 1

U prvoj liniji standardnog ulaza korisnik unosi tekst. Potrebno je redom ispisivati podstringove sa leve na desnu stranu, u svakoj liniji se dužina podstringa povećava za jedan, dok se ne dođe do kraja unetog teksta, nakon toga pomera se početak podstringa za jedno mesto u desno.
