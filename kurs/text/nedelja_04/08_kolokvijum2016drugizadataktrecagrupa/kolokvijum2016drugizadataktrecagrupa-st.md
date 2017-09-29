
Koristeći naredbu while i funkciju getchar() za čitanje karaktera obraditi ulaznu sekvencu slova tako da se izbroji broj susednih pojavljivanja slova (broje se i mala i velika slova kao jednaka) i ispiše na odgovarajući nacin.
## Opis ulaza

  - Preko standardnog ulaza korisnik unosi tekst(sastavljen od velikih i malih slova engleskog alfabeta)

## Opis izlaza

  - Na standardi izlaz ispisuje se odgovarajući tekst.
## Primer 1

### Ulaz

~~~
AAababbBBCc
~~~

### Izlaz

~~~
A3B1A1B4C2
~~~

## Primer 2

### Ulaz

~~~
Bb ccCcC DdDDDDdddDD ef
~~~

### Izlaz

~~~
B2C5D11E1F1
~~~

## Objašnjenje primera 1

Prva linija standardnog ulaza označava da korisnik unosi tekst: 'AAababbBBCc'. S obzirom da se i velika i mala slova gledaju identično, jasno se vidi da je redosled uzastopnih slova sledeći: 3 puta slovo A, 1 slovo B, jednom slovo A, četiri puta slovo B, dva puta slovo C. Shodno tome potrebno je ispisati sledeći tekst na standardnom izlazu: A3B1A1B4C2.
