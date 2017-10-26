Napisati program koji za dati niz *A*, dužine *N*, ispisuje sortirani niz *A* u neopadajucem poretku.

## Opis ulaza

Preko standardnog upisa:
- Prva linija sadrži celobrojni tip *N* (broj elemenata u nizu)
- Druga linija sadrži *N* razmakom odvojena broja koji opisuju niz *A*

## Opis izlaza

Na standardni izlas se ispisuje sortiran niz *A*.

## Primer 1

### Ulaz

~~~
5
5 1 2 8 3
~~~

### Izlaz

~~~
1 2 3 5 8
~~~

## Primer 2

### Ulaz

~~~
4
3 2 1 2
~~~

### Izlaz

~~~
1 2 2 3
~~~

## Objašnjenje primera
Prva linija standardnog ulaza označava broj elemenata u nizu (*N* = 5)
Druga linija standardnog ulaza opisuje niz *A* = {5, 1, 2, 8, 3}

Kada sortiramo niz *A*, dobijamo da je *A* = {1, 2, 3, 5, 8} i zbog toga ispisujemo 1 2 3 5 8
## Ograničenja
0 < *N* <= 20
-1000 <= *A[i]* <= 1000