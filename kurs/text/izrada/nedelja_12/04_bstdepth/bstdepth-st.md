Napisati program koji podatke sa standardnog ulaza čuva u binarnom stablu pretrage, nakon čega ispisuje maksimalnu dubinu kreiranog stabla.

## Objašnjenje
Dubinu stabla definišemo kao maksimalni nivo čvora u stablu. Nivo čvora definišemo tako što uzmemo da je nivo korena stabla jednak 1, a zatim uvećavamo broj za jedan pri svakom skoku od korena ka podstablima. Tako, nivo svih naslednika korena će biti 2, nivo njihovih naslednika 3 itd.

## Opis ulaza

  - Preko standardnog ulaza korisnik unosi celi brojevi N i M (N>0)
  - U sledecih N linija korisnik unosi tacno jedan ceo broj preko standardnog ulaza od kojih je potrebno kreirati BST(moguc je unos negativnih brojeva)

## Opis izlaza

  - Na standardnom izlazu ispisati broj koji predstavlja dubinu stabla

## Primer 1

### Ulaz

~~~
5 
5
3
20
-7
1
~~~

### Izlaz

~~~
4
~~~

## Primer 2

### Ulaz

~~~
7
10
4
18
-8
1
14
-11
~~~

### Izlaz

~~~
4
~~~
