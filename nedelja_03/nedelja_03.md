## Naredbe ponavljanja (petlje)

Ukoliko rešavamo problem u programiranju koji zahteva da se neki blok naredbi izvrši više puta potrebne su nam naredbe ponavljanja ili petlje. Primeri ovakvih problema su programi koji računaju zbir prvih n prirodnih brojeva, izračunavaju n! (n! = n\*(n-1)\*(n-2)\*...\*1). Ovakvi programi se često nazivaju programi sa cikličnom strukturom.  

U C-u postoje tri naredbe kojima se mogu implementirati programi sa cikličnom strukturom. To su:

* for
* while
* do..while. 

Svaka od ovih naredbi omogućava nam da implementirao ponavljanje bloka naredbi. Jedno izvršavanje bloka naredbi u okviru petlje naziva se iteracija. 


## Naredba for

Sintaksa for naredbe je 

```{r, eval = FALSE}
for(inicijalizacija; uslov; inkrementacija){
	blok naredbi
}
```

Dijagram toka koji ilustruje način izvršavanja for naredbe: 

![alt text](https://github.com/RAFSoftLab/uvod-u-programiranje/blob/master/nedelja_03/for-blok%20dijagram.jpg)


Prvo se izvrši inicijalizacija, i zatim se proverava uslov. Ukoliko je njegova vrednost tačna (odnosno u C-u veća od 0), ulazi se u blok naredni koji je naveden u petlji. Kada se izvrše sve naredbe izvršava se inkrementacija i tok programa se vraća na ponovno ispitivanje uslova. Opisani proces se ponavlja sve dok je ispunjen uslov. Ako uslov nije ispunjen izlazi se iz petlje i nastavlja se sa izvršavanjem naredbi koje su navedene posle for petlje. Deo za inkrementaciju najčešće menja vrednost promenljive koja se pojavljuje u uslovu.   

Ako bismo posmatrali problem izračunavanja zbira svih parnih brojeva u intervalu od nula, do nekog zadatog broja n, ovaj zadatak bi se mogao jednostavno implementirati korišćenjem for naredbe.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int zbir = 0;
    printf("Unesite broj n:\n");
    scanf("%i", &n);
    for(i=0; i<=n; i+=2){
        zbir +=i;
    }
    printf("Zbir parnih brojeva od 0 do %d jednak je %d.", n, zbir);
    return 0;
}
```

Na početku definišemo sve potrebne promenljive, to je promenljiva n koja predstavlja ulazni podatak, promenljiva i koji će se koristiti kao brojač u for petlji i promenljiva zbir u kojoj će se akumulirati zbir u toku izvršavanja petlje. Promenljivoj zbir na početku dodeljujemo vrednost 0, a u for petlji ćemo joj dodavati parne brojeve.

Nakon što korisnik unese broj n ulazi se u for petlju koja u delu za inicijalizaciju postavlja vrednost brojača na nula, uslov za izlazak iz petlje je da smo došli do broja n (u obzir uzimamo samo brojeve koji su manji ili jednaki sa n), a u delu za inkrementaciju brojač povećavamo za dva, jer se traže samo parni brojevi. U for petlji je navedena jedna naredba koja trenutni zbir povećava za brojač i koji će u svakoj iteraciji for petlje imati sledeći parni broj u intervalu od 0 do n. 

## Naredba while

Sintaksa naredbe while je:

```{r, eval = FALSE}
while (uslov){
	blok naredbi;
}
```

## Naredba do..while


## break i continue




