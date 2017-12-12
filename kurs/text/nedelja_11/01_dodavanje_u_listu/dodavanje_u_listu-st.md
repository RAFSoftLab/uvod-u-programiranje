Napisati program koji implementira jednostruko povezanu listu čiji elementi čuvaju jedan ceo broj i sadrži sledeće funkcije:

1. ```Element* dodaj_na_kraj(Element* lista, Element* novi)```

    Dodaje element *novi* na kraj jednostruko povezane liste.
2. ```Element* dodaj_na_pocetak(Element* lista, Element* novi)```

    Dodaje element *novi* na početak jednostruko povezane liste.
3. ```Element* dodaj_na_poziciju(Element* lista, Element* novi, int i)```

    Dodaje element *novi* i-to mesto u listi(indeksiranje kreće od 0) ili na kraj ako to mesto ne postoji

Sve funkcije vraćaju pokazivač na početak liste.

Korisnik unosi ceo broj A, koji predstavlja redni broj funkcije koju zeli da koristi za umetanje elementa u listu, zatim u narednom redu unosi, u zavisnosti od izabrane funkcije, ceo broj B koji zeli da doda u listu i opciono indeks X na koji će postaviti taj ceo broj(ukoliko koristi funkciju ```dodaj_na_poziciju```). Unos prestaje kada korisnik unese 0 za vrednost celog broja A. Na kraju ispisati dobijenu listu.

***Napomena: Izbrisati listu iz memorije na kraju programa!***

## Opis ulaza

Korisnik unosi ceo broj 0<=A<=3 koji predstavlja broj funkcije koji se koristi ili kraj unosa u slučaju da je za A uneta 0. Vrednost A se vezuje po rednom broju funckije u tekstu zadatka:

1 - ```dodaj_na_kraj(Element* lista, Element* novi)```

2 - ```dodaj_na_početak(Element* lista, Element* novi)```

3 - ```dodaj_na_poziciju(Element* lista, Element* novi, int i)```

U zavisnosti od izabrane funkcije u narednom redu se unosi ceo broj B koji se unosi u listu i opciono indeks X, ukoliko je A jednako 3.

## Opis izlaza

Ispisuje se dobijena lista.


## Primer 1

### Ulaz

~~~
1
5
2
3
2
2
1
7
3
4 2
0
~~~

### Izlaz

~~~
2 3 4 5 7
~~~

## Objašnjenje
Prvo je dodat element 5 na kraj liste, zatim element 3 na početak liste, zatim element 2 na početak liste, zatim element 7 na kraj liste i na kraju element 4 na poziciju 2.
