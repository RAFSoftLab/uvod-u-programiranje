Napisati program koji iz datog niza *A*, dužine *N*, izvršava *K* levih roacija na nizu. 
Leva rotacija je operacija na nizu dužine *N* koji pomera elemente niza u levo. Na primer, ako se na niz {1, 2, 3, 4, 5} izvrse 2 leve rotacije, onda niz postaje {3, 4, 5, 1, 2}

## Опис улаза

Preko standardnog ulaza korisnik unosi:
- Prva linija sadrzi celobrojni tip *N* (broj elemenata u nizu) i *K* (broj izvršavanja levih operacija)
- Druga linija sadrži *N* razmakom odvojena broja koji opisuju niz *A*

## Опис излаза

Na standardni izlaz ispisati modifikovan niz.

## Пример 1

### Улаз

~~~
5 3
1 2 3 4 5
~~~

### Излаз

~~~
4 5 1 2 3
~~~


## Објашњење примера
Prva linija standardnog ulaza označava broj elemenata u nizu *A* (*N* = 5) i broj levih rotacija (*K* = 3)
Nakon unosa, *A* = {1, 2, 3, 4, 5}
Niz ce se menjati na sledeci nacin:
{1, 2, 3, 4, 5} -> {2, 3, 4, 5, 1} -> {3, 4, 5, 1, 2} -> {4, 5, 1, 2, 3}

## Ограничења
0 < *N* <= 20
0 < *K* <= *N*
0 < *A[i]* <= 1000