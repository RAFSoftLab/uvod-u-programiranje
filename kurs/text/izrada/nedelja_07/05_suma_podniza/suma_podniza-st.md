Napisati program koji iz datog niza *A*, dužine *N*, ponalazi podniz uzastopnih elemenata niza *A* sa najvećom sumom elemenata. Ispisati sumu tog podniza.

**NAPOMENA**
**Podniz niza *A* čine uzastopni elementi niza *A*
Bar jedan element niza *A* će biti pozitivan**

## Opis ulaza

Preko standardnog ulaza korisnik unosi:
- Prva linija sadrži celobrojni tip *N* (broj elemenata u nizu)
- Druga linija sadrži *N* razmakom odvojena broja koji opisuju niz *A*

## Opis izlaza

Na standardni izlaz ispisati sumu najveceg podniza

## Primer 1

### Ulaz

~~~
3
7 6 5
~~~

### Izlaz

~~~
18
~~~

## Primer 2

### Ulaz

~~~
5
1 -5 3 12 -1
~~~

### Izlaz

~~~
15
~~~

## Objasnjenje primera
**Primer 2**
Prva linija standardnog ulaza označava broj elemenata u nizu *A* (*N* = 5)
Nakon unosa, *A* = {1, -5, 3, 12, -1}

Podniz sa najvećom sumom je {3, 12}. Ukoliko bi dodali element {-5} ili element {-1} suma bi se smanjila, pa ih zato ne dodajemo. 
-5 + 3 + 12 = 10
3 + 12 - 1 = 14
Da bi dodali element {1} morali bi da dodamo i elemnt {-5}, jer se trazi podniz uzastopnih elmenata niza *A*, time bi smanjili najvecu sumu (3 + 12 + 1 - 5 = 11) i zbog toga je najveca suma 3 + 12 = 15

## Ограничења
0 < *N* <= 20
-1000 <= *A[i]* <= 1000
