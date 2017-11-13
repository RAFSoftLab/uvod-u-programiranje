Napisati program koji za dati niz *A*, dužine *N*, ispisuje sortirani niz *A* u neopadajucem poretku.

## Опис улаза

Preko standardnog upisa:
- Prva linija sadrži celobrojni tip *N* (broj elemenata u nizu)
- Druga linija sadrži *N* razmakom odvojena broja koji opisuju niz *A*

## Опис излаза

Na standardni izlas se ispisuje sortiran niz *A*.

## Пример 1

### Улаз

~~~
5
5 1 2 8 3
~~~

### Излаз

~~~
1 2 3 5 8
~~~

## Пример 2

### Улаз

~~~
4
3 2 1 2
~~~

### Излаз

~~~
1 2 2 3
~~~

## Објашњење примера
Prva linija standardnog ulaza označava broj elemenata u nizu (*N* = 5)
Druga linija standardnog ulaza opisuje niz *A* = {5, 1, 2, 8, 3}

Kada sortiramo niz *A*, dobijamo da je *A* = {1, 2, 3, 5, 8} i zbog toga ispisujemo 1 2 3 5 8
## Ограничења
0 < *N* <= 20
-1000 <= *A[i]* <= 1000