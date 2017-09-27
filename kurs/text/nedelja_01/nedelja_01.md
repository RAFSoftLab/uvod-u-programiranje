---
title: Tipovi podataka i promenljive
author: RAF
---

## Funkcija main

Da bismo mogli da počnemo sa programiranjem u programskom jeziku C pre svega se moramo upoznati sa funkcijom main. Funkcija main je posebna funkcija u programskom jeziku C, jer kada neki program pokrenemo izvršavaju se naredbe koje su napisane u ovoj funkciji. To je funkcija bez argumenata i najčešće ima povratnu vrednost tipa int. Sam pojam funkcije će kasnije biti detaljnije objašnjen, za sada treba znati da funkcija ima svoje ime, može imati jednu povratnu vrednost i može imati nula ili više ulaznih argumenata (parametara).

Sintaksa funkcije main je:

```c
#include <stdio.h>
int main(){
      printf("Zdravo!\n");
      return 0;
}
```
Ovde je dat primer jednostavnog programa u programskom jeziku C, ovaj program će na konzolu (sistemski izlaz) ispisati pozdrav "Zdravo!" a značenje pojedinačnih linija koda je sledeće:

`#include <stdio.h>` - uvoz potrebnih biblioteka iz okruženja (već gotovih konstrukcija koje možemo da koristimo u našim programima), ovde je u pitanju standardna biblioteka za  ulaz i izlaz, odnosno učitavanje podataka sa konzole i ispis podataka na konzolu

*main()* – definicija funkcije pod nazivom „main” koja nema ulaznih parametara, što je označeno praznim zagradama

*{* - početak bloka naredbi u kom je implementirana funkcija main
printf("Zdravo!\n"); - ispis na konzolu jednog stringa (niz karaktera pod navodnicima), oznaka \n predstavlja oznaku za novi red. Funkcija printf je uvezena iz standardne biblioteke i prima kao ulazni parametar string koji će se ispisati.

*return 0;* - povratna vrednost funkcije main(), ovde vraćamo broj nula koji označava pravilan izlazak iz programa, neki drugi broj (različit od 0) označava da program nije završen pravilno.

*}* – kraj bloka u kom je implementirana funkcija main.

U ovom objašnjenju uveli smo nekoliko važnih pojmava iz programiranja kao što su blok naredbi, string, funkcija, biblioteka i svi ovi pojmovi biće detaljno objašnjenji u nastavku.

## Predstavljanje podataka u računaru

Osnovna jedinica informacije u računaru je *bit* (skraćenica od engleske reči binary digit) koji ima dve moguće vrednosti 1 ili 0 (odnosno tačno ili netačno, ili upaljeno i ugašeno). Kombincijom više bitova dobijamo složenije jedinice informacija na računarima, kao što je *bajt* koji sadrži 8 bitova. Veće količine informacija se u računaru predstavljaju preko *kilobajta* (skraćeno KB) koji sadrži 1024 bajtova, *megabajta* (skraćeno MB) koji sadrži 1024 kilobajta, *gigabajta* (1024 megabajta) i *terabajta* (1024 gigabajta).

Svi podaci u računaru se na najnižem nivou predstavljaju preko bitova, odnosno 0 i 1, ali se oni interpretiraju i u programima koriste u obliku brojeva ili karaktera koji su čoveku prepoznatljivi.

## Brojevni sistemi

Pored binarnog brojevnog sistema, u računarstvu se koriste još i sledeći brojevni sistemi:
* decimalni ili dekadni je sistem sa osnovom 10 i to je sistem koji je nama poznat i koji svakodnevno koristimo, za predstavljanje brojeva koristi se 10 cifara, 0,1,2,..9,
* oktalni sistem je sistem sa osnovom 8, to su cifre 0,1,2,3,4,5,6,7,
* heksadecimalni sistem je sistem sa osnovom 16 i koristi sledeće vrednosti 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E i F (mogu biti i mala slova).

## Predstavljanje karaktera i ASCII tabela

Svi podaci se u računaru predstavljaju preko brojeva, otuda potiče naziv digitalni računar, od engleske reči digit koja znači cifru ili broj. Preko brojeva se predstavljaju celi i realni brojevi, ali i slova, boje, i drugo.

Osnovna slovna informacija u programima je *karakter*. Karakter se odnosi na slovo, cifru, znakove interpukcije, a postoje i karakteri koji se ne prikazuju kao što je na primer karakter koji označava kraj reda.

Najpoznatiji sistem za predstavlajnje karaktera je *ASCII (American Standard Code for Information Interchange)*. ASCII standard predstavlja pravilo za preslikavanje karaktera na brojeve kojima se ti karakteri predstavljaju u računaru. To mapiranje predstavljano je tabelom koja je dostupna na http://www.asciitable.com/.

ASCII tabela ima 128 karaktera označeni brojevima od 0 do 127. Prvih 30-ak karaktera (od 0 do 31) u ASCII tabeli se ne štampa i predstavlja kontrolne karaktere. Mala slova engleske abecede predstavljena su redom od a do z brojevima 97 do 122 (u decimalnom brojevnom sistemu), velika slova su predstavljena takođe redom od 65 do 90, dok su cifre predstavljene brojevima od 48 do 57. Treba primetiti da je razlika između malog i velikog slova u tabeli ista za sva slova i iznosi 32, ova informacija se može koristiti u programima u kojima je potrebno pretvoriti malo slovo u veliko i obrnuto.


## Tipovi podataka

Svaki podatak u programu pripada određenom *tipu*. Primeri nekih tipova dati su u naredoj tabeli.

<table>
    <tr><th>Podatak</th><th>Tip</th></tr>
    <tr><td>'a'</td><td>karakter</td></tr>
    <tr><td>5</td><td>ceo broj</td></tr>
    <tr><td>"abc"</td><td>string (niz karaktera)</td></tr>
    <tr><td>8.456</td><td>realan broj</td></tr>
</table>

Tipovi podataka se mogu podeliti u dve grupe:
* prosti ili osnovni tipovi podataka i
* složeni tipovi podataka.

U programskom jeziku C postoje tri osnovna tipa podataka, to su:
* int -  za predstavljanje celih brojeva,
* float - za predstavljanje realnih brojeva,
* char - za predstavljanje kataktera.

Složeni tipovi podataka se odnose na tipove koji nastaju kombinacijom jednog ili više prostih tipova na primer nizovi celih brojeva, nizovi karaktera, zatim strukture koje sadrže ceo broj i niz karaktera i sl. Postoji i specijalan tip podataka pod nazivom *void* koji predstavlja praznu, odnosno nepostojeću vrednost i koristi se najviše kod funkcija da označi da funkcija nema povratnu vrednost.

Pored tipa podataka int celi brojevi se mogu predstaviti tipovima podataka short i long, a razlika između njih je samo u količini memorije (broju bajtova) koja se koristi za predstavljanje, a samim tim i u rasponu mogućih vrednosti. Od tipova podataka za predstavljanje celih brojeva najmanje memorijskog prostora zauzima short, zatim int i na kraju long. Ni jedan tip podataka ne može da predstavi sve cele brojeve, već samo brojeve u određenom opsegu. Za pozitivne cele brojeve koriste se tipovi unsigned int, unsigned short i unsigned long.

Pored tipa float realni brojevi se u C-u mogu predstaviti tipovima double i long double. Dok tip float zauzima 4 bajta, double 8 bajtova, a long double najčešće 10 ili 12 bajtova. Tipovi podataka koji zauzimaju više memorije omogućavaju i veću preciznost predstavljanja broja i veći raspon mogućih vrednosti.

## Promenljive

Tipovi podataka su vrsta podataka koji se mogu koristiti u programima i mogu se odnositi na konstantne vrednosti. Na primer podatak 'a' je podatak tipa char koji je konstanta i njegova vrednost se ne može menjati. Sa druge strane, ako želimo da koristimo podatke koji se mogu menjati u programima, na primer mogu se učitati preko konzole ili im se u toku rada programa menja vrednost koristimo *promenljive*.

Promenljive predstavljaju podatke kojima se upravlja u programima. Promenljive mogu menjati vrednost u toku izvršavanja programa, otuda potiče reč promenljiva ili na engleskom *variable*. U najprostijem smislu to su imenovani delovi memorije kojima se pristupa u programu. Svaka promenljiva u C-u mora imati ime i definisan tip kojim je određena veličina u memoriji rezervisana za promenljivu kao i skup operacija koje se mogu vršiti nad promenljivom.

Imena promenljivih mogu sadržati cifre, slova i donju crticu, a moraju početi slovom ili donjom crticom. Mala i velika slova razlikuju u programskom jeziku C, odnosno da C ima osobinu case sensitive i ona se odnosi i na nazive promenljivih, to znači da su promenljive sa nazivima mojaPromenljiva i mojapromenljiva potpuno različite promenljive koje čak mogu biti i različitog tipa i odnose se na različita mesta u memoriji. Na osnovu imena u programu se pristupa promenljivoj i možemo saznati njenu trenutnu vrednost, promeniti joj vrednost ili je koristiti u izrazima.

Svaka promenljiva koja se koristi u programu mora se prvo deklarisati. Deklaracija promenljive navodi se u obliku:
tip lista_promenljivih;

Primeri deklaracije promenljivih

```c
int i, j, k;
char c, ch;
float duzina, sirina;
double d;
```
U prvom redu deklarišu se tri promenljive tipa int pod nazivom i, j i k. U drugom redu deklarišu se dve promenljive tipa karakter sa nazivima c i ch.

Prilikom deklaracije promenljiva se može inicijalizovati, što znači može joj se dodeliti početna vrednost. Na primer:
```c
int i=0, j=1;
```
Vrednost promenljive se može dodeliti i kasnije u programu, na primer:

```c
j=3;
```

## Funkcije printf i scanf

Programi koje ovde pravimo pisani su za *konzolu*. Konzola je jedan poseban računarski program koji je deo operativnog sistema preko koga je moguće vršiti komunikaciju sa programom ili operativnim sistemom bez grafičkog korisničkog interfejsa.  Preko konzole se komunikacija vrši samo korišćenjem tastature, i ona obuhvata ispis nekog teksta koji se prikazuje korisniku ili unos nekog teksta od strane korisnika programa.

U programskom jeziku C postoje dve ugrađene funkcije koje ćemo za sada koristiti za komunikaciju preko konzolu, to su funkcija *printf* koja se koristi za ispis na konzolu i funkcija *scanf* koja se koristi za učitavanje sa konzole. U primeru za funkciju main koristili smo funkciju printf za ispis pozdrava na konzolu.

Poziv funkcija printf ima sledeći oblik:

```c
printf(ispis, izraz1, izraz2,...)
```

Prvi argument funkcije je niz znakova koji će se ispisati na konzolu, i on može sadržati specijalne znakove koji počenju znakom %, na primer %i, %d, %c, %s. Mesto gde se nalaze ovi znakovi će u rezultujućem ispisu biti popunjeno redom izrazima koji se navedeni kao argumenti funkcije printf (od drugog i dalje). Svaki oznaka koja počinje znakom % formatira ispis izraz na odgovarajući način, na primer %d ispisuje ceo broj u decimalnom brojevnom sistemu, a %x ispisuje ceo broj u heksadecimalnom brojevnom sistemu, %f ispisuje realan broj, a može se zadati i broj decimala koje će se ispisati, %c ispisuje karakter.  

Na primer, sledeća poziv funkcije printf će ispisati broj 500 prvo u decimalnom pa u heksadecimalnom formatu

```c
printf("Decimalni: %d, heksadecimalni: %x", 500, 500);
```
Za učitavanje znakova preko konzole koristi se funkcija scanf koja se poziva u sledećem obliku:

```c
scanf(format_unosa, pokazivač_na_promenljivu1, pokazivač_na_promenljivu2...);
```

Prvi argument funkcije scanf je niz izraza koji počinju znakom % i koji označavaju vrstu podataka koji se čitaju preko konzole, a koriste se iste oznake kao za ispis sa printf. Ostali argumenti predstavljaju pokazivače na promenljive u koje će se smestiti učitane vrednosti. Pokazivače za sada treba shvatiti kao adrese promenljivih, a označavaju se početnim znakom & iza koga sledi ime promenljive. Promenljive koje se ovde nalaze moraju biti prethodno deklarisane u programu.

Sledi primer poziva funkcije scanf koja sa konzole učitava jedan ceo i jedan realan broj.

```c
int br;
float br1;
char karakter;
scanf("%d%f%c", &br, &br1,&karakter);
```
U navedenom primeru deklarišu se tri promenljive čije vrednosti će se učitati sa konzole korišćenjem funkcije scanf.

## Aritmetički operatori

U programskom jeziku C dostupni su standradni binarni aritmetički operatori +, - , * , / i %. Operator / predstavlja celobrojno deljenje ako se koristi sa tipom podataka int ili klasično deljenje ako se koristi sa tipom podataka float. Operator % daje ostatak pri deljenju i koristi se sa celim brojevima.

Pored binarnih operatora u programskom jeziku C dostupna su i dva unarna operatora. To su uvećanja i umanjenja za 1 (++ i --)

Aritmetički opratori imaju prioritet izvršavanja, na primer množenje se izvršava pre sabiranja, slično  kao u matematici, a najveći prioritet imaju unarni operatori.

Jedna važna napomena odnosi se na operacije uvećanja i umanjenja za 1. Oznaka -- i ++, može se navesti pre (prefiksno navođenje) ili posle (sufiksno navođenje) oznake promenljive i ima različito značenje. Ukoliko se navede prefiksno, operacija se odmah izvršava i vrednost promenljive se menja u momentu poziva operacije, a ako se navede sufiksno u izrazu u kom se poziva operacija koristi se stara vrednost promenljive ali će se njena vrednost promeniti u sledećem pozivu.

## Ugrađene funkcije kao operatori

Pored operatora koje smo do sada videli i koji koriste specijalne simbole, svaki viši programski jezik ima veliki broj već gotovih ugrađenih funkcija koji mogu da odrade veliki broj korisnih operacija. 

Jedna od ugrađenih funkcija je funkcija pow(a,n) koja računa n-ti stepen broja a. Funkcija pow, kao i većina drugih funkcija dostupna je u biblioteci math.h i da bi se koristila potrebno je u zaglavlje programa dodati sledeću liniju:

```c
#include <math.h>
```
Još neke od korisnih funkcija iz biblioteke math.h su:
* abs(n) - vraća apsolutnu vrednost promenljive n;
* sqrt(n) - vraća kvadratni koren promenljive n;
* pow(x,n) - vraća n-ti stepen broja x;
* rand() - vraća slučajno generisani broj.

## Operatori dodele vrednosti

Operatori dodele vrednosti postavljaju vrednost promenljive. Osnovni operator dodele je znak =, ali se on može kombinovati sa ostalim aritmetičkim operacijama kako bi se kraće zapisale često korišćene operacije.
Tako na primer imamo operator dodele += koji na promenljivu sa leve strane dodaje vrednost sa desne, na primer C += A je isto kao da smo zapisali C = C + A.
Pored sabiranja, operatori dodele se mogu kombinovati i sa drugim aritmetičkim operacijama i tako dobijamo sledeće operatore dodele vrednosti  -=, %=, /=, \*= i slično.
