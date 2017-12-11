Napisati program koji implementira jednostruko povezanu listu čiji elementi čuvaju jedan ceo broj i sadrži sledeće funkcije:

1. ```Element* obrisi_vrednost(Element* lista, int vred)```

    Briše sve elemente iz liste koji imaju vrednost *vred*.
2. ```Element* obrisi_sa_pozicije(Element* lista, int poz)```

    Briše sve element iz liste na poziciji *poz*, ukoliko postoji takav element.

Sve funkcije vraćaju pokazivač na početak liste.

Korisnik unosi cele brojeve koji se dodaju na početak liste sve dok ne unese 0, koja označava kraj unosa liste i ne unosi se u listu. Zatim unosi ceo broj A koji označava koju funkciju korisnik želi da koristi za brisanje elemenata iz unete liste. Ukoliko A nije 0 korisnik unosi ceo broj B koji označava vrednost ili poziciju(indeksiranje kreće od 0) koju korisnik želi da izbriše u zavisnosti od izabrane funkcije. Ukoliko korisnik unese 0 za vrednost A korisnik prestaje sa unosom. Na kraju se ispisuje novodobijena lista.

***Napomena: Izbrisati listu iz memorije na kraju programa!***

## Opis ulaza

Na početku korisnik unosi cele brojeve koji se dodaju na početak jednostruko povezane liste, sve dok ne unese broj 0 koji označava kraj unosa brojeva u listu.
Korisnik unosi ceo broj 0<=A<=2 koji predstavlja broj funkcije koji se koristi ili kraj unosa u slučaju da je za A uneta 0. Vrednost A se vezuje po rednom broju funckije u tekstu zadatka:

1 - ```Element* obrisi_vrednost(Element* lista, int vred)```

2 - ```Element* obrisi_sa_pozicije(Element* lista, int poz)```

U zavisnosti od izabrane funkcije u narednom redu se unosi ceo broj B koji predstavlja vrednost koja se briše iz liste ili poziciju(indeksiranje kreće od 0) sa koje se briše iz liste.

## Opis izlaza

Ispisuje se dobijena lista.


## Primer 1

### Ulaz

~~~
2 4 1 5 4 19 0
2
2
1
4
0
~~~

### Izlaz

~~~
19 1 2
~~~

## Objašnjenje
Elementi u prvom redu ulaza se dodaju na početak liste sve dok se ne naiđe na 0. Lista posle učitavanja izgleda ovako: 19 4 5 1 4 2. Nakon toga se briše element na poziciji 2, a zatim svi elementi koji imaju vrednost 4.
