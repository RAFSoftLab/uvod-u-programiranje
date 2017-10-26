Napisati program koji za dati niz *A*, dužine *N* i *K* veličina "prozora" pravi novi niz *B* na sledeci nacin:
*B[i]* = *A[i]*, ako je *i + 1* < *K*
*B[i]* = (*A[i]* + *A[i-1]* + ... + *A[i - K + 1]*) / *K*

**NAPOMENA**
**Svi elementi niza *B* su celobrojni tipovi**
## Опис улаза

Preko standardnog upisa:
- Prva linija sadrži celobrojni tip *N* (broj elemenata u nizu) i *K* (velicina prozora)
- Druga linija sadrži *N* razmakom odvojena broja koji opisuju niz *A*

## Опис излаза

Na standardni izlas se ispisuje niz *B*

## Пример 1

### Улаз

~~~
7 3
5 6 3 5 8 2 1 
~~~

### Излаз

~~~
5 6 4 4 5 5 3
~~~

## Пример 2

### Улаз

~~~
3 1
1 2 3 
~~~

### Излаз

~~~
1 2 3
~~~

## Објашњење примера
Prva linija standardnog ulaza označava broj elemenata u nizu (*N* = 7) i velicinu prozora (*K* = 3)
Nakon unosa niz *A* = {5, 6, 3, 5, 8, 2, 1}

Prateci formulu dobijamo da je:
*B[0]* = 5
*B[1]* = 6
*B[2]* = (5 + 6 + 3) / 3 = 4
*B[3]* = (6 + 3 + 5) / 3 = 4
*B[4]* = (3 + 5 + 8) / 3 = 5
*B[5]* = (5 + 8 + 2) / 3 = 5
*B[6]* = (8 + 2 + 1) / 3 = 3
*B* = {5, 6, 4, 4, 5, 5, 3}
## Ограничења
0 < *N* <= 20
0 < *K* <= *N*
0 < *A[i]* <= 1000