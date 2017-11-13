Napisati program koji iz datog niza *A*, duzine *N*, pronalazi element koji se najviš puta pojavljuje. Ispisati element i broj ponavljanja tog elementa.

**NAPOMENA**
**Ukoliko dva elementa ili vise elemenata ima istu učestalost, ispisati najmanji element. Ukoliko se element 1 pojavljuje 2 puta i element 2 pojavaljuje 2 puta program ispisuje 1**

## Опис улаза

Preko standardnog ulaza korisnik unosi:
- Prva linija sadrži celobrojni tip *N* (broj elemenata u nizu)
- Druga linija sadrži *N* razmakom odvojena broja koji opisuju niz *A*

## Опис излаза

Na standardni izlaz se ispisuju element koji se najvise puta ponavlja i broj ponavljanja.

## Пример 1

### Улаз

~~~
4
1 1 2 2
~~~

### Излаз

~~~
1 2
~~~

## Пример 2

### Улаз

~~~
7
3 8 12 12 5 8 8 
~~~

### Излаз

~~~
8 3
~~~

## Објашњење примера
Prva linija standardnog ulaza označava broj elemenata u nizu *A* (*N* = 4)
Nakon unosa, *A* = {1, 1, 2, 2}

Elementi 1 i 2 se pojavljuju dva puta, ali je 1 < 2 i zbog toga ispisujemo 1 2. U ispisu 1 je element, a 2 je ucestalost tog elementa.

U drugom primeru se element 3 pojavljuje jednom, element 5 se pojavljuje jednom, element 8 se pojavljuje tri puta i element 12 se pojavljuje 2 puta. Najviše se pojavljuje element 8 (tri puta) pa zbog toga ispisujemo taj element.


## Ограничења
0 < *N* <= 20
0 <= *A[i]* <= 1000

## Напомена
U ispisu prvo ispisati element, pa njegovu učestalost.