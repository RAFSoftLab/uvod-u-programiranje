Napisati program koji implementira jednostruko povezanu listu čiji elementi čuvaju jedan ceo broj i funkcije:
* ```Element* dodaj_sortirano(Element* lista, Element* novi) ```
* ```Element* spoji_liste(Element* lista1, Element* lista2)```

Funkcija *dodaj_sortirano* dodaje element *novi* na odgovarajuće mesto u neopadajuće sortiranoj listi i vraća pokazivač na početak liste.

Funkcija *spoji_liste* spaja liste *lista1* i *lista2* tako da spojena lista bude u neopadajućem poredaku.

***Napomena: Izbrisati liste iz memorije na kraju programa!***

## Опис улаза

Korisnik unosi celobrojne elemente liste *lista1* dok ne naidje na *0*, gde *0* označava kraj unosa brojeva u listu *lista1*.
Nakon toga, korisnik unosi celebrojne elemente liste *lista2* dok ne naidje na *0*, gde *0* označava kraj unosa brojeva u listu *lista2*.

## Опис излаза

Ispisuje se nova neopadajuca lista, koja se dobija spajanjem dve unete liste.

## Пример 1

### Улаз

~~~
1 5 7 0
2 4 6 8 0
~~~

### Излаз

~~~
1 2 4 5 6 7 8
~~~

## Пример 2

### Улаз

~~~
1 2 3 4 0
1 2 3 4 0
~~~

### Излаз

~~~
1 1 2 2 3 3 4 4
~~~

## Објашњење примера

Nakon unosa, *lista1* = (1 -> 5 -> 7) i *lista2* = (2 -> 4 -> 6 -> 8)
U novu listu ubacujemo redom, (1 -> 2 -> 4 -> 5 -> 6 -> 7 -> 8) da bi nova lista bila u neopadajućem poretku.

