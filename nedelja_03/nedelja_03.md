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

Dijagram toka koji ilustruje izvršavanje while naredbe:

![alt text](https://github.com/RAFSoftLab/uvod-u-programiranje/blob/master/nedelja_03/while-blok%20dijagram.jpg)

Prvo se proverava ispunjenje zadatog uslova, ukoliko je uslov ispunjen, izvršava se blok naredbi i ide se ponovo na proveru uslova. Ukoliko uslov nije ispunjen izlazi se iz while petlje i nastavlja sa izvršavanjem naredbi koje su navedene posle while naredbe. Ovde možemo zaključiti da se blok naredbi u while-u ne mora izvršiti ni jednom. Uslov while naredbe je logičkog tipa, odnosno u C-u celobrojnog tipa. 

Primer kojim ćemo ilustrovati while naredbu je primer izračunavanja faktorijela za neki broj koji unosi korisnik. Faktorijel nekog broja se računa na sledeći način:

```{r, eval = FALSE}
0! = 1;
n! = n\*(n-1)\*(n-2)\*...\*1.
```

Implementacija ovog programa korišćenjem while naredbe: 

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Unesite broj: ");
    scanf("%i", &n);
    int faktorijel = 1;
    while(n>0){
            faktorijel = faktorijel * n;
            --n;
    }
    printf("Vrednost faktorijela je %d", faktorijel);
    return 0;
}
```

Nakon definisanja promenljivih, učitavanja broja n i inicijalizacije promenljive faktorijel ulazi se u while petlju čiji je uslov da je n veće od nula. U petlji množimo faktorijel sa renutnim n i smanjujemo n za jedan. Sigurno je da će program dati dobar rezultat za n koje je veće od 0, ali se može postaviti pitanje da li program radi i u slučaju n=0? Odgovor je da, jer program neće ući u petlju (jer uslov n>0 nije zadovoljen na početku) i promenljiva faktorijel će zadržati svoju početnu vrednost, a to je 1, što jeste jednako 0!. 


## Naredba do..while

Sintaksa naredbe do..while je:

```{r, eval = FALSE}
do{
	blok naredbi;
}while(uslov)
```
Dijagram toka koji ilustruje izvršavanje naredbe do...while:

![alt text](https://github.com/RAFSoftLab/uvod-u-programiranje/blob/master/nedelja_03/dowhile-blok%20dijagram.jpg)

Naredba se izvršava tako što se prvo izvrši blok naredbi, nakon čega se proverava ispunjenost uslova. Ukoliko je ispunjen uslov, ponovo se izvršava blok naredbi, ukoliko uslov nije ispunjen izlazi se iz petlje i nastavlja se sa izvršavanjem naredbi koje su navedene posle do..while naredbe. Osnovna razlika između naredbi while i do..while je što će se kod naredbe do..while blok naredbi sigurno izvršiti barem jednom.   

Posmatrajmo sada zadatak da od korisnika želimo da učitamo broj koji je deljiv sa tri i dok korisnik ne unese takav broj ponovo ispisujemo isti zahtev. Ovakav zadatak je najbolje implementirati korišćenjem do..while naredbe:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int broj;
    do{
        printf("unesite broj deljiv sa tri: \n");
        scanf("%i", &broj);

    }while(broj%3!=0);

    printf("%i / 3 = %i", broj, broj/3);
    return 0;
}
```
Zbog prirode do..while naredbe korisniku će se zahtev ispisati barem jednom, nakon učitavanja broja proverava se uslov, a to je da broj nije deljiv sa tri, ako je ovaj uslov ispunjen, znači da nismo učitali dobar broj i izvršava se sledeća iteracija do..while naredbe, ako uslov nije ispunjen, znčai da je učitan broj deljiv sa tri i završava se izvršavanje do..while naredbe. 

## break i continue

Postoje dve ugrađene naredbe koje mogu da promene tok izvršavanja petlji i mogu se koristiti u kombinaciji sa bilo kojom od tri navedene naredbe ponavljanja. 

Prva je naredba break, koja prekida proces izvršavanja petlje, a druga je naredba continue koja prekida izvršavanje jedne iteracije petlje.  




