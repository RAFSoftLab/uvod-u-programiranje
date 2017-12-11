Napisati program koji implementira jednostruko povezanu listu čiji elementi čuvaju jedan ceo broj i funkciju:

+ ```void nadovezi(Element* lista1, Element* lista2)```

    Nadovezuje elemente liste *lista2* na listu *lista1* u obrnutom poretku.

Korisnik unosi cele brojeve koji se dodaju na početak prve liste sve dok ne unese 0, koja označava kraj unosa prve liste i ne unosi se u listu. Isti postupak se ponavlja pri unošenju druge liste, zatim se te 2 liste nadovezuju funkcije ```nadovezi``` i ispisuje novodobijena lista.

***Napomena: Izbrisati sve liste iz memorije na kraju programa!***

## Opis ulaza

Korisnik unosi cele brojeve koji se dodaju na početak  prve jednostruko povezane liste, sve dok ne unese broj 0 koji označava kraj unosa brojeva u prvu listu.

Korisnik unosi cele brojeve koji se dodaju na početak druge jednostruko povezane liste, sve dok ne unese broj 0 koji označava kraj unosa brojeva u drugu listu.

## Opis izlaza

Ispisuje se lista dobijena nadovezivanjem druge liste na prvu pomoću funkcije ```nadovezi```.

## Primer 1

### Ulaz

~~~
1 2 3 4 0
5 6 7 8 0
~~~

### Izlaz

~~~
4 3 2 1 5 6 7 8
~~~
