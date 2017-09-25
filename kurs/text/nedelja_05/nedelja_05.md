---
title: Ugnježdene petlje, funkcije
author: RAF
---

## Ugnježdene naredbe ponavljanja

Naredbe ponavljanja se mogu kombinovati tako da se jedna petlja poziva unutar druge, može biti neograničen broj ovako ugnježdenih petlji, a mogu se i kombinovati različite vrste petlji, for, while ili do..while.

Ako bismo hteli da napravimo program koji zahteva da se unese 5 parnih brojeva preko konzole, ne dozvoljava da se unese sledeći broj dok se ne unese parni i na kraju ispisuje najveći od unetih 5 brojeva. Ovaj zadatak se može rešiti korišćenjem ugnježdene petlje.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, max, br;
    max = 0;
    for(i = 0; i<5; i++){
        do{
           printf("Unesite %i. paran broj: \n", i+1);
           scanf("%i", &br);

        }while(br%2!=0);
        if(br>max)
            max = br;
    }
    printf("Najveci uneti parni broj je %i\n", max);
    return 0;
}
```

Ovde imamo primer for petlje koja sadrži do..while petlju. For petlja će se izvršiti 5 puta za svaki traženi parni broj. U svakoj iteraciji for petlje izvrava se jedna ili više iteracija do..while petlje u kojoj tražimo da se unese paran broj i vrtimo se u petlji sve dok se to ne desi. Kada se učita paran broj, završava se do..while u jednoj iteraciji for petlje i prelazi se na sledeću iteraciju for petlje.  

## Ugnježdene petlje i break

Naredba break prekida izvršavanje petlje u kojoj je pozvana. Ako se ova naredba pozove u unutrašnjoj petlji prekida se ta unutrašnja petlja, ali spoljašnja petlja nastavlja da se izvršava. 

Ako bismo hteli da napišemo sve proste brojeve od 2 do 100, ovaj zadatak bismo najlakše uradili korišćenjem dvostruke for petlje, gde bi spoljašnja petlja išla po svim brojevima od 2 do 100,a unutrašnja proveravala da li je trenutni broj iz spoljašnje petlje prost.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for(i=2; i<100; i++){
        for(j=2; j<=i/2; j++){
            if(i%j==0) break;
        }
        if(j > i/2)
            printf("Broj %i je prost broj\n", i);
    }
    return 0;
}
```
Spoljašnja for petlja kreće se po brojevima za koje proveravamo da li su prosti, a unutrašnja se kreće po potencijalnim činiocima. Ukoliko u unutrašnjoj petlji naiđemo na broj kojim je deljiv broj iz spoljašnje petlje prekidamo unutrašnju petlju. Ako smo izašli iz unutrašnje petlje jer je brojač j došao do kraja, tj. ispunjen je uslov j>i/2 zbog kog je završena unutrašnja petlja, znači da nije pronađen ni jedan činilac sa kojim je i deljivo i to znači da je i prost broj i možemo ga ispisati. U slučaju da smo iz unutrašnje petlje izašli sa break, znači da postoji broj kojim je i deljivo, j će biti manje od i/2 i taj broj se neće ispisati. 

## Funkcije




## Opseg vidljivosti promenljivih


