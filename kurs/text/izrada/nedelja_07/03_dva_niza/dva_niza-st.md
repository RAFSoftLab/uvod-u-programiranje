Napisati program koji za uneti niz *A*, duzine *N*, formira nizove *B* i *C* tako da su elementi niza *B* parni članovi niza *A*, a elementi niza *C* su neparni članovi niza *A*.

## Opis ulaza

Preko standardnog ulaza korisnik unosi:
- Prva linija sadrži celobrojni tip *N* (broj elemenata u nizu)
- Druga linija sadrži *N* razmakom odvojena broja koji opisuju niz *A*

## Opis izlaza

Na standardni izlaz se ispisuju nizovi *B* i *C*

## Primer 1

### Ulaz

~~~
5
1 4 3 1
~~~

### Izlaz

~~~
4
1 3 1
~~~

## Primer 2

### Ulaz

~~~
5
3 8 15 2 6
~~~

### Izlaz

~~~
8 2 6
3 15
~~~

## Objašnjenje primera
Prva linija standardnog ulaza oznacava broj elemenata u nizu *A* (*N* = 4)
Nakon unosa, *A* = {1, 4, 3, 1}

1 je neparan element pa se nadovezuje na niz *C*
4 je paran element pa se nadovezuje na niz *B*
3 je neparan element pa se nadovezuje na niz *C*
1 je neparan element pa se nadovezuje na niz *C*

Niz *B* = {4}, a niz *C* = {1, 3, 1}

## Ograničenja
0 < *N* <= 20
-1000 <= *A[i]* <= 1000

## Napomena
Prvo ispisati niz *B*, a niz *C* u sledecćm redu.