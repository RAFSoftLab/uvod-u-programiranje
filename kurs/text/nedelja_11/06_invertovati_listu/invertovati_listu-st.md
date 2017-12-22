Napisati program koji implementira jednostruko povezanu listu čiji elementi čuvaju ceo broj i funkcije:
* ```Element* dodajNaKraj(Element* lista, Element novi)```
* ```Element* invertuj(Element* lista)```

Funkcija *dodajNaKraj* dodajele element *novi* na kraj liste.
Funkcija *invertuj* invertuje listu

***Naomena: Izbrisati liste iz memorije nakon završetka programa!***
## Опис улаза

Korisnik unosi celobrojne elemente liste *lista*, svaki element se dodaje na kraj liste. Korisnik unosi elemente liste dok ne naidje na *0*, gde *0* označava kraj unosa brojeva u listu

## Опис излаза

Ispisuje se invertovana lista

## Пример 1

### Улаз

~~~
1 2 3 4 5 6 0
~~~

### Излаз

~~~
6 5 4 3 2 1
~~~

## Пример 2

### Улаз

~~~
9 5 1 0
~~~

### Излаз

~~~
1 5 9
~~~

## Објашњење примера
Nakon unosa, *lista* = (1 -> 2 -> 3 -> 4 -> 5 -> 6)
Invertovanjem liste *lista* tada je *lista* = (6 -> 5 -> 4 -> 3 -> 2 -> 1)

