Napisati program koji proverava da li se jedna matrica nalazi unutar druge matrice.

## Опис улаза

Na standardni ulaz unose se dimenzije prve matrice N1 i M1. Nakon toga unosi se matrica sa N1 kolona i M1 vrsta. Zatim se unose se dimenzije druge matrice N2 i M2 i matrica sa N2 kolona i M2 vrsta.

Dimenzije matrica su prirodni brojevi, dok su elementi matrica celi brojevi.

## Опис излаза

Na standardni izlaz ispisati "DA" ako se prva matrica nalazi unutar druge, a "NE" ako se ne nalazi (reči ispisati bez navodnika i bez prelaska u novi red).

## Пример 1

### Улаз

~~~
2 3
1 2 3
4 5 6
5 5
1 1 2 3 3
4 4 5 6 6
7 7 8 9 9
~~~

### Излаз

~~~
DA
~~~

## Пример 2

### Улаз

~~~
2 2
1 1
1 1
2 3
1 1 2
2 1 1
~~~

### Излаз

~~~
NE
~~~

## Објашњење примера 1

Prva matrica se nalazi u drugoj i to u preseku 1. i 2. vrste i 2, 3. i 4. kolone.