---
title: Naredbe ponavljanja (petlje)
author: RAF
---

## Naredbe ponavljanja (petlje)

Ukoliko rešavamo problem u programiranju koji zahteva da se neki blok naredbi izvrši više puta potrebne su nam naredbe ponavljanja ili petlje. Primeri ovakvih problema su programi koji računaju zbir prvih n prirodnih brojeva, izračunavaju n! (n! = n\*(n-1)\*(n-2)\*...\*1). Ovakvi programi se često nazivaju programi sa cikličnom strukturom.  

U C-u postoje tri naredbe kojima se mogu implementirati programi sa cikličnom strukturom. To su:

* for
* while
* do..while.

Svaka od ovih naredbi omogućava nam da implementiramo ponavljanje bloka naredbi. Jedno izvršavanje bloka naredbi u okviru petlje naziva se iteracija.


## Naredba for

Sintaksa for naredbe je

```
for(inicijalizacija; uslov; inkrementacija){
	blok naredbi
}
```

Dijagram toka koji ilustruje način izvršavanja for naredbe:

![alt text](media/nedelja_03/for-blok-dijagram.jpg)


Prvo se izvrši inicijalizacija, i zatim se proverava uslov. Ukoliko je njegova vrednost tačna (odnosno u C-u veća od 0), ulazi se u blok naredbi koji je naveden u petlji. Kada se izvrše sve naredbe izvršava se inkrementacija i tok programa se vraća na ponovno ispitivanje uslova. Opisani proces se ponavlja sve dok je ispunjen uslov. Ako uslov nije ispunjen izlazi se iz petlje i nastavlja se sa izvršavanjem naredbi koje su navedene posle for petlje. Deo za inkrementaciju ne mora uvek da znači povećanje vrednosti neke promenljive za jedan, to može da bude proizvoljno povećanje ili smanjenje vrednosti promenljive, a najčešće se menja vrednost promenljive koja se pojavljuje u uslovu.   

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

```
while (uslov){
	blok naredbi;
}
```

Dijagram toka koji ilustruje izvršavanje while naredbe:

![alt text](media/nedelja_03/while-blok-dijagram.jpg)

Prvo se proverava ispunjenje zadatog uslova, ukoliko je uslov ispunjen, izvršava se blok naredbi i ide se ponovo na proveru uslova. Ukoliko uslov nije ispunjen izlazi se iz while petlje i nastavlja sa izvršavanjem naredbi posle while naredbe. Ovde možemo zaključiti da se blok naredbi u while-u ne mora izvršiti ni jednom. Uslov while naredbe je logičkog tipa, odnosno u C-u celobrojnog tipa.

Primer kojim ćemo ilustrovati while naredbu je primer izračunavanja faktorijela za neki broj koji unosi korisnik. Faktorijel nekog broja se računa na sledeći način:

```
0! = 1
n! = n*(n-1)*(n-2)*...*1
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

Nakon definisanja promenljivih, učitavanja broja n i inicijalizacije promenljive faktorijel ulazi se u while petlju čiji je uslov da je n veće od nula. U petlji množimo faktorijel sa trenutnim n i smanjujemo n za jedan. Sigurno je da će program dati dobar rezultat za n koje je veće od 0, ali se može postaviti pitanje da li program radi i u slučaju n=0? Odgovor je da, jer program neće ući u petlju (jer uslov n>0 nije zadovoljen na početku) i promenljiva faktorijel će zadržati svoju početnu vrednost, a to je 1, što jeste jednako 0!.


## Naredba do..while

Sintaksa naredbe do..while je:

```
do{
    blok naredbi;
}while(uslov)
```
Dijagram toka koji ilustruje izvršavanje naredbe do...while:

![alt text](media/nedelja_03/dowhile-blok-dijagram.jpg)

Naredba se izvršava tako što se prvo izvrši blok naredbi, nakon čega se proverava ispunjenost uslova. Ukoliko je ispunjen uslov, ponovo se izvršava blok naredbi, ukoliko uslov nije ispunjen izlazi se iz petlje i nastavlja se sa izvršavanjem naredbi koje su navedene posle do..while naredbe. Osnovna razlika između naredbi while i do..while je što će se kod naredbe do..while blok naredbi sigurno izvršiti barem jednom.   

Posmatrajmo sada zadatak da treba učitati broj koji je deljiv sa tri i dok korisnik ne unese takav broj ponovo ispisujemo isti zahtev. Ovakav zadatak je najbolje implementirati korišćenjem do..while naredbe:

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
Zbog prirode do..while naredbe korisniku će se zahtev ispisati barem jednom, nakon učitavanja broja proverava se uslov, a to je da broj nije deljiv sa tri, ako je ovaj uslov ispunjen, znači da nismo učitali dobar broj i izvršava se sledeća iteracija do..while naredbe, ako uslov nije ispunjen, znači da je učitan broj deljiv sa tri i završava se izvršavanje do..while naredbe.

## break i continue

Postoje dve ugrađene naredbe koje mogu da promene tok izvršavanja petlji i mogu se koristiti u kombinaciji sa bilo kojom od tri navedene naredbe ponavljanja.

Prva je naredba break, koja prekida proces izvršavanja petlje, a druga je naredba continue koja prekida izvršavanje jedne iteracije petlje.

Način na koji naredba break funkcioniše ako se pozove u petlji može se ilustovati na sledeći način

![alt text](media/nedelja_03/break.jpg)

Ovde se naredba break koristi u while petlji, ali na isti način se može pozvati i sa ostalim naredbama ponavljanja. Ako se toku izvršavanja petlje u određenoj grani pozove naredba break, na tom mestu se prekida izvršavanje petlje i prelazi se na sledeću naredbu posle petlje.

Zadatak sa učitavanjem broja koji je deljiv sa 3 koji smo prethodno uradili korišćenjem do..while naredbe može se implementirati korišćenjem while petlje i naredbe break:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj;
    while(1){
        printf("unesite broj deljiv sa tri: \n");
        scanf("%i", &broj);
        if(broj%3==0)
            break;
    }
    printf("%i / 3 = %i", broj, broj/3);
    return 0;
}
```
Ovde smo izabrali da napravimo beskonačnu petlju (uslov za naredbu while je uvek tačan), ali čim dobijemo odgovarajući broj izlazimo iz petlje naredbom break i program nastavlja sa naredbom posle while-a, odnosno ispisuje rezultat deljenja unetog broja sa 3.

Naredba continue ne prekida celu petlju već trenutnu iteraciju i može se ilustrovati na sledeći način

![alt text](media/nedelja_03/continue.jpg)

Kada se u toku izvršavanje petlje u nekoj grani programa naiđe na naredbu continue, prekida se izvršavanje trenutne iteracije, odnosno preskaču se naredbe u bloku naredbi 2 i tok izvršavanja programa vraća se na ispitivanje uslova za sledeću iteraciju petlje (for, while ili do..while). Ukoliko je uslov ispunjen, izvršava se sledeća iteracija petlje.

Naredba continue se može iskoristiti u implementaciji programa koji sabira 10 brojeva koji se unose preko konzole, ali izostavlja negativne brojeve.

```c
# include <stdio.h>
int main()
{
    int i;
    double broj, suma = 0.0;
    for(i=1; i <= 10; ++i){
        printf("Unesite broj %d: ",i);
        scanf("%lf",&broj);
        // ako korisnik unese negativan broj, preskacemo ga
        if(broj < 0.0){
            continue;
        }
        suma += broj;
    }
    printf("Suma = %.2lf",suma);
    return 0;
}
```

Imamo for petlju koja će imati deset iteracija, u svakoj iteraciji učitavamo broj preko konzole i ako je unet negativan broj naredbom continue prelazimo na sledeću iteraciju, odnosno preskačemo naredbu koja sabira uneti broj sa trenutnom sumom.


## Uvod u funkcije

Pojam funkcija je jedan od najznačajnijih pojmova u programiranju bez kog je teško zamisliti bilo koji ozbiljniji program. Funkcija se može opisati kao imenovani blok naredbi kojima se implementira neki zadatak. Ovakav imenovani blok naredbi se može pozvati više puta bez potrebe da se ponovo navode iste naredbe. Korišćenjem funkcija moguće je izvršiti dekompoziciju i bolju organizaciju programskog koda.
Postoje veliki broj već gotovih funkcija koje uvozimo iz različitih biblioteka, neke od njih smo videli: rand(), scanf(), printf(). Iza svakog od ovih naziva krije se blok naredbi koje je neko implementirao.

Deklaracija funkcije ima sledeći oblik

```
tip_povratne_vrednosti  ime_funkcije(lista parametara){
	blok naredbi
}
```

Funkcija može da vrati neku vrednost i u tom slučaju se pre imena funkcije navodi tip vrednosti koju funkcija vraća. Ukoliko se navede tip povratne vrednosti funkcija mora u svakoj grani izvršavanja da vrati vrednost tog tipa. Ukoliko funkcija ne vraća ništa za tip povratne vrednosti stavlja se reč void.

Lista parametara sadrži spisak ulaznih podataka u funkciju. Svaki parametar se navodi kao par tip i naziv parametra, a parametri se razdvajaju zarezom.

Funkcija se poziva na osnovu svog imena, a za parametre funkcije se prosleđuju konkretne vrednosti. Ako funkcija vraća neku vrednost, pri pozivu funkcije se povratna vrednost mora dodeliti nekoj promenljivoj da bi ostala sačuvana.

Primer funkcije koja vraća maksimum dva zadata broja i njen poziv u funkciji main:

```c
#include <stdio.h>
#include <stdlib.h>

int maksimumDvaBroja(int broj1, int broj2){
    int rezultat;
    if(broj1>broj2)
       rezultat = broj1;
    else
       rezultat = broj2;
    return rezultat;
}

int main()
{
   int a = 100;
   int b = 200;
   int rez;
   rez = maksimumDvaBroja(a, b);   // poziv funkcije i smestanje rezultata u promenljivu rez
   printf( "Maksimalna vrednost je : %d\n", rez );
   return 0;
}
```
Naziv funkcije je maksimumDvaBroja i funkcija vraća podatak koji je tipa int, a prima dva parametra, broj1 i broj2, takođe tipa int. Ovi parametri se sa zadatim imenima koriste u telu funkcije, a u funkciji se mogu definisati i lokalne promenljive, kao što je u ovom slučaju promenljiva rezultat. Promenljiva rezultat je vrednost koja se prosleđuje kao rezultat izvršavanja funkcije pozivom naredbe return. Ako funkcija nema povratnu vrednost, onda se naredba return može pozvati bez parametara za izlazak iz funkcije. 

Kada se funkcija poziva u funkciji main, potrebno je proslediti konkretne vrednosti za sve ulazne parametre funkcije, a tip prosleđenih vrednosti mora se poklapati sa tipovima ulaznih parametara u definiciji funkcije. Pošto funkcija vraća vrednost tipa int, prilikom poziva funkcije povratnu vrednost smo dodelili promenljivoj rez.  
