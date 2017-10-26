Napisati program koji za dati niz *A*, dužine *N*, ispisuje svaki element u suprotnom redosledu.

## Opis ulaza
Preko standardnog ulaza korisnik unosi:
- Prva linija sadrži celobrojni tip *N* (broj elemenata u nizu)
- Druga linija sadrži *N* razmakom odvojena broja koji opisuju niz *A*

## Opis izlaza

Na standardni izlas se ispisuju svih *N* elemenata niza *A* u suprotnom redosledu.

## Primer 1

### Ulaz

~~~
4
1 3 4 2
~~~

### Izlaz

~~~
2 4 3 1
~~~

## Primer 2

### Ulaz

~~~
6
3 9 2 1 7 3
~~~

### Izlaz

~~~
3 7 1 2 9 3
~~~

## Objašnjenje primera
Prva linija standardnog ulaza označava broj elemenata u nizu (*N* = 4)
Druga linija sandardnog ulaza opisuje niz *A* = {2, 4, 3, 1}

Suprotan niz niza *A* je niz {1, 3, 4, 2} i zbog toga ispisujemo 1 3 4 2
## Ograničenja
0 < *N* <= 20
-1000 <= *A[i]* <= 1000