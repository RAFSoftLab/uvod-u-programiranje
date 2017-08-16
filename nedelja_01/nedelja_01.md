# Funkcija main

Funkcija main je funkcija koja se prva izvršava kada se pokrene program (eng. *entry point*). U zavisnosti od operativnog sistema main funkcija prima različite parametre, ali se isto tako može koristiti i bez parametara. Najčešće ima povratnu vrednost tipa int.

Sintaksa main funkcije bez parametara:

```c
#include <stdio.h>
int main(){     
      return 0;
}
```

# Funkcije printf i scanf

Funkcije printf i scanf su deo standardne biblioteke za ulaz i izlaz *stdio.h*

## Funckija printf

Funckija printf služi za formatirano ispisivanje teksta u konzolu.

Primer korišćenja funkcije printf:

```c
#include <stdio.h>
int main(){   
    printf("Hello world\n");
    return 0;
}
```

Primer korišćenja funkcije printf ispisuje *Hello world* u konzolu sa prelaskom kursora u sledeći red (specijalni karakter ```\n``` ).

Neki od specijalnih karaktera u funkciji printf:

| Karakteri| Značenje|
| :------------- | :------------- |
| \\n| prelazi u novi red|
| \\r| vraća kursora na početak trenutnog reda|
| \\a| oglašava biper|
| \\"| ispisuje "|
| \\ \\| ispisuje \\|
| \\'| ispisuje '|
| \\t| horizontalni tab|
| \\v| vertikalni tab|

## Funckija scanf

Funkcija scnaf služi za formatirani unos podataka iz konzole.

Primer korišćenja funkcije scanf:
```c
#include <stdio.h>

int main(){
    int god;
    printf("Unesite godinu rodjenja: ");
    scanf("%d", &god);
    printf("Hvala sto ste uneli %d kao vasu godinu rodjenja", god);
    return 0;
}
```

# Tipovi podataka

Celobrojni tipovi podataka:

| Oznaka| Veličina| Skup vrednosti|
| :------------- | :------------- | :------------- |
| char| 1 bajt| -128 do 127 ili 0 do 255|
| unsigned char| 1 bajt| 0 do 255|
| short| 2 bajta| -32,768 do 32,767|
| unsigned short| 2 bajta| 0 do 65,535|
| int| 2 ili 4 bajta| -32,768 do 32,767 ili -2,147,483,648 do 2,147,483,647|
| unsigned int| 2 ili 4 bajta| 0 do 65,535 ili 0 do 4,294,967,295|
| long| 4 bajta| -2,147,483,648 do 2,147,483,647|
| unsigned long| 4 bajta| 0 do 4,294,967,295|
| long long| 8 bajtova| −9,223,372,036,854,775,807 do 9,223,372,036,854,775,807|
| unsigned long long| 8 bajtova| 0 do 18,446,744,073,709,551,615|

Tipovi podataka sa pokretnim zarezom:

| Oznaka| Veličina| Skup vrednosti| Preciznost|
| :------------- | :------------- | :------------- | :------------- |
| float| 4 bajta| 1.2E-38 do 3.4E+38| 6 decimala|
| double| 8 bajtova| 2.3E-308 do 1.7E+308| 15 decimala|
| long double| 10 bajtova| 3.4E-4932 do 1.1E+4932| 19 decimala|

Tabela specijalnih karaktera:

| Tip| Karakter|
| :------------- | :------------- |
| char| %c, %hhi|
| unsigned char| %c, %hhu|
| short| %hi|
| unsigned short| %hu|
| int| %d, %i|
| unsigned int| %u|
| long| %ld, %li|
| unsigned long| %lu|
| long long| %lld, %lli|
| unsigned long long| %llu|
| float| %f|
| double| %lf|
