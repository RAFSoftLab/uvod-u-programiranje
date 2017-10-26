Napisati program koji za dati niz *A*, dužine *N* ispisuje najduži palindromski podniz.
Palindromski podniz je niz uzastopnih elemenata nekog niza za koje vazi da se isto čita sa obe strane.

**NAPOMENA**
**Ukoliko dva palindromska podniza imaju isti broj elemenata, ispisati palindromski podniz koji se prvo pojavljuje.**

## Opis ulaza

Preko standardnog upisa:
- Prva linija sadrži celobrojni tip *N* (broj elemenata u nizu)
- Druga linija sadrži *N* razmakom odvojena broja koji opisuju niz *A*

## Opis izlaza

Na standardni izlas se najduži palindromski podniz.

## Primer 1

### Ulaz

~~~
7
3 1 5 1 5 1 9 7 4
~~~

### Izlaz

~~~
1 5 1 5 1
~~~

## Primer 2

### Ulaz

~~~
6
1 2 5 4 2 1
~~~

### Izlaz

~~~
1
~~~

## Objasnjenje primera
Prva linija standardnog ulaza označava broj elemenata u nizu (*N* = 7)
Druga linija standardnog ulaza opisuje niz *A* = {3, 1, 5, 1, 5, 1, 9, 7, 4}

Palindromski podnizovi:
{3}, {1}, {5}, {9}, {7}, {4}, {1, 5, 1}, {5, 1, 5}, {1, 5, 1, 5, 1}
Palindromski podniz sa najvise elemenata j e {1, 5, 1, 5, 1}, pa ga i zbog toga ispisujemo.
## Ograničenja
0 < *N* <= 20
-1000 <= *A[i]* <= 1000
## Napomena
Ukoliko dva palindromska podniza imaju isti broj elemenata, ispisati palindromski podniz koji se prvo pojavljuje.