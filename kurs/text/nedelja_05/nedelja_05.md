---
title: Ugnježdene petlje, funkcije i opseg vidljivosti promenljivih
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
Spoljašnja for petlja kreće se po brojevima za koje proveravamo da li su prosti, a unutrašnja se kreće po potencijalnim deliocima. Ukoliko u unutrašnjoj petlji naiđemo na broj kojim je deljiv broj iz spoljašnje petlje prekidamo unutrašnju petlju. Ako smo izašli iz unutrašnje petlje jer je brojač j došao do kraja, tj. ispunjen je uslov j>i/2 zbog kog je završena unutrašnja petlja, znači da nije pronađen ni jedan činilac sa kojim je i deljivo i to znači da je i prost broj i možemo ga ispisati. U slučaju da smo iz unutrašnje petlje izašli sa break, znači da postoji broj kojim je i deljivo, j će biti manje od i/2 i taj broj se neće ispisati. 

## Funkcije

Ranije smo videli da funkcija predstavlja imenovani blok naredbi kome mogu da se proslede neki podaci preko ulaznih parametara, a funkcija može i da vrati neki podatak odrađenog tipa. U zaglavlju funkcije navode se naziv funkcije, tip podatka koji funkcija vraća ili reč void ukoliko ne vraća ništa, i lista ulaznih parametara, pri čemu se za svaki parametar navodi naziv i tip parametra. Ukoliko funkcija nema ulaznih parametera ostavljaju se prazne zagrade, ili se u zagradama navodi reč void.

Prethodni primer sa ispisom prostih brojeva možemo implementirati tako što napišemo funkciju jeProstBroj koja ispituje da li je broj prost i onda tu funkciju pozovemo u for petlji. 

```c
#include <stdio.h>
#include <stdlib.h>

// deklaracija funkcije
int jeProstBroj(int broj);  

int main()
{
  int m,n,i;

  printf("Unesite dva broja (interval):\n");
  scanf("%i%i", &m, &n);
  printf("Prosti brojevi u intervalu od %i do %i su:\n", m, n);
  for(i=m; i<=n; i++){
   if(jeProstBroj(i))
       printf("%i ", i);
  }
  return 0;
}

// definicija funkcije
int jeProstBroj(int broj){
  int i,jeProst=1;
  for(i=2;i<=broj/2;i++){
       if(broj%i==0){
           jeProst=0;
           break;
       }
  }
  return jeProst;
}
```

Implementacija funkcije se u ovom primeru sastoji iz dva dela, prvo je navedena *deklaracija* funkije, pre funkcije main. Deklaracija sadrži samo zaglavlje funkcije, odnosno tip izlaznog parametra, naziv funkcije, i listu parametara i u njoj se ne navodu “telo” funkcije odnosno blok naredbi koje čine implementaciju funkcije. U ovom primeru u pitanju je funkcija sa nazivom jeProstBroj koja vraća tip podataka int, ima jedan ulazni parametar pod nazivom broj koji je tipa int. Uloga deklaracije je da kompajleru obezbedi informacije o toma kako se finkcija poziva. Da bi funkcija mogla da se pozove u main metodi njena deklaracija mora da se navede pre main metode (naredba #include <stdio.h> ustvari prepisuje zaglavlja funkcija iz biblioteke stdio.h). 

*Definicija* funkcije jeProstBroj navedena je ispod main metode. Definicija funkcije sadrži konkretnu implementaciju funkcije, odnosno blok naredbi i mora imati isto zaglavlje (nazv, tip povratne vrednosti i ulazne parametre) kao i definicija funkcije. Funkcija jeProstBroj proverava da li je prosleđeni parametar prost broj i ako jeste vraća 1, ako nije vraća 0. U funkciji su definisane dve lokalne promenljive, to su promenljiva i koja će se koristiti kao brojač u for petlji i promenljiva jeProst koja će sadržati rezultujuću vrednost funkcije, odnosno informaciju o tome da li je broj prost. 

Provera da li je broj prost implementirana je  u for petlji koje proverava sve potencijalne delioce, i ako naiđe na broj sa kojim je deljiv prosleđeni broj, promenljivoj jeProst se dodeljuje vrednost 0  naredbom break izlazi iz for petlje.  

Funkciju jeProstBroj možemo da implementiramo i bez posebne promenljive jeProst i bez naredbe break.

```c
int jeProstBroj(int broj){
  int i;
  for(i=2;i<=broj/2;i++){
       if(broj%i==0){
          return 0;
       }
  }
  return 1;
}
```

U ovom primeru koristi se naredba return, čim se nađe delilac broja i tom naredbom izlazi se iz cele funcije, pa samim tim i iz for petlje. Logika koje je ovde iskorišćena glasi: ”čim nađemo delioca broja, odmah izlazimo iz funkcije i prosleđujemo informaciju da broj nije prost”. Poslednja naredba return 1 izvršiće se samo u slučaju da funkcija nije završila sa radom u for petlji, a to će biti ako nije pronađen ni jedan delilac broja.


## Opseg vidljivosti promenljivih

Opseg vidljivosti promenljivih predstavlja programski blok u kom kreirana promenljiva “postoji”, što znači da joj se u tom bloku može pristupati i da joj se može menjati vrednost. Izvan tog bloka promenljiva ne postoji. 

Ako posmatramo implementaciju funkcije jeProstBroj (u prvoj verziji) vidimo da su u njoj definisane dve lokalne promanljive tipa int, to su i i jeProst, vidljjivost ovih promenljivih je na nivou funkcije u kojoj su definisane, izvan funkcije jeProstBroj ove dve promenljive ne postoje. Možemo primetiti da je u funkciji main takođe definasana promenljiva i, međutim ova promenljiva i nema nikakve veze sa promenljivom i u funkciji jeProstBroj, jer funkcije main i jeProstBroj predstavljaju dva različita opsega vidljivosti promenljivih. 

Na osnovu opsega vidlijivosti promenljive možemo podeliti u tri grupe:

* promenljive definisane u bloku
* interne ili lokalne promenljive
* eksterne ili globalne promenljive.

Prvu vrstu promenljivih čine promenljive definisane u jednom bloku naredbi koji je označen vitičastim zagradama i može se odnositi na neku od naredbi grananje (if, switch) ili naredbi ponavljanja, a može biti i samostalni blok označen vitičastim zagradama (ovde jedino ne ubrajamo blok naredbi koji predstavlja implementaciju funkcije).  Ova vrsta promenljivih vidljiva je samo u bloku u kom je definisana, kao i u svim unutrašnjim blokovima. Ovo je primer programa koji sadrži definiciju promenljive x u jednom bloku. Promenljiva je vidljiva u bloku u kom je definisana i u unutrašnjem bloku. 

```c
#include<stdio.h>
int main(){
{                     /* spoljasnju blok */
  int x=10;
  {                      /* unutrasnju blok */
      printf("x=%d",x);
  }
  printf("\nx=%d",x);
}
return 0;
}
```

U sledećem primeru promenljivoj x  pristupa joj se izvan bloka u kom je definisana. 

```c
include<stdio.h>

int main(){
 if(10<20){
    int x=10;
    printf("x=%d",x);  // ovde se može pristupiti promenljivoj x
 }
 printf("\nx=%d",x);    // ovde se ne može pristupiti promenljivoj x
 return 0;
}

```



Ovaj programski kod će izazvati grešku prilikom kompajliranja, a poruka će glasiti:

```
error: 'x' undeclared (first use in this function)
```
Ova poruka znači da kompajler na tom mestu ne vidi promenljivu x, odnosno ne vidi da je ona definisana.  

Postoji mogućnost da se promenljiva redefiniše u unutrašnjem bloku, kao u sledećem primeru: 

```c
#include<stdio.h>
int main(){
    int x=40;
    if(10<20){
        float x=10.25;       /* redefinisanje promenljive */
        printf("x=%f",x);
    }
    printf("\nx=%d",x);    /* pristup promenljivoj iz spoljasnjeg bloka */
    return 0;
}
```

Ovde je promenljiva x, definisana jednom u spoljašnem bloku kao tip int, a zatim redefinisana u unutrašnjem kao tip float (može biti i isti tip kao u spoljašnjem bloku). Na ovaj način imamo situaciju da je promenljiva x iz spoljašnjeg bloka “sakrivena” u unutrašnjem bloku i umesto nje se koristi druga promeljiva sa istim imenom. 

Interne ili lokalne promenljive su promenljive definisane u telu funkcije. Opseg vidljivosti ovih promenljivih ograničen je na funkciju u kojoj su definisane. Promenljivoj koja je difinisana u jednoj funkciji ne može se pristupiti iz druge funkcije. U sledećem primeru prikazan je program u kom se u funkciji main poziva funkcija prikazi. 

```c
#include<stdio.h>

void prikazi();

int main(){
    int x=10;
    prikazi();
    return 0;
}

void prikazi(){
    printf("x=%d",x);
}

```


U funkciji main definisana je promenljiva x, a i u funkciji prikazi() pristupamo promenljivoj x, međutim x u funkciji prikazi() nema nikakve veze sa promenljivom x iz funkcije main i prilikom kompajliranja ovog programa dobićemo grešku da promenljiva x nije definisana u funkciji prikazi. 

Ako se u bilo koje dve funkcije kreira promenljiva sa istim imenom i jedna funkcija poziva drugu, ove dve promenljive su potpuno nezavisne i formiraju se na dve različite memorijske lokacije. 

Lokalne promenljive se kriraju u momentu kad se pozove funkcija, a prestaju da postoje kada se završi izvršavanje funkcije i ne čuvaju vrednost za sledeće pozive iste funkcije. Drugim rečima, kada se kreira lokalna promenljiva u funckiji vrši se tzv. alokacija memorije (zauzimanje memorijskog prostora), kada se završi izvršavanje funkcije, vrši se dealokacija memorije i promenljiva prestaje da postoji. Ovo je ilustrovano u sledećem primeru:  

```c
#include<stdio.h>

void prikazi();

int main(){
    prikazi();
    prikazi();
    prikazi();  
    return 0;
}
void prikazi(){
    int x=10;
    x=x+10;
    printf("%d\n",x);
}
```
U ispisu ovog programa, uvek će biti ista vrednost promenljive x, što znači da se pri svakom pozivu funkcije prikaži kreira nova promenljiva x.

Sve lokalne promenljive o kojima je do sada bilo reči odnosile su se na pomoćne funkcije u programima u kojima se promenljive kreireju i uništavaju i posle izvršavanja funkcija prestaju da postoje. Šta se dešava sa promenljivama koje su definisane u funkciji main (direktno u bloku funkcije, ne u unutrašnjem bloku), koji je njihov “životni vek”? Funkcija main() predstavlja izvršavanje programa i zato se za promanljive definisane u njoj mamorija alocira na početku programa a dealocira po završetku rada programa. 

Postoji još jedan slučaj promenljive koji zahteva posebno objašnjenje, a to su parametri funkcije. Posmatrajmo primer funkcije increment:

```c
#include <stdio.h>
#include <stdlib.h>

void increment(int x);

int main(){
   int x = 10;
   printf("x pre funkcije %d\n", x);
   increment(x);
   printf("x posle funkcije %d", x);
   return 0;
}

void increment(int x){
 x = x+1;
}
```

U funkciji main se poziva funkcija increment i vrši ispis vrednosti promenljive pre i posle poziva funkcije. Ako pokrenemo ovaj program videćemo da je vrednost promenljive x ostala nepromenjena posle poziva funkcije. Ovaj način prosleđivanja parametra naziva se prosleđivanje “po vrednosti”, što znači da se kao parametar funkcije prosleđuje samo vrednost promenljive a ne i promenljiva na određenoj memorijskoj lokaciji. Ukoliko bismo imali mogućnost da prosledimo memorijsku lokaciju do promenljive onda bismo imali prosleđivanje “po referenci” i vrednost promenljive bi se promenila po izlasku iz funkcije. Ovaj način prosleđivanja parametara nije podržan u C-u (iako se u nekim izvorima može naći informacija da jeste, u pitanju je samo simulacija ovog koncepata preko pokazivača), ali je podržan u većini objektno-orijentisanih programskih jezika. Ulazni parametri funkcija u C-u se mogu smatrati lokalnim promenljivima funkcije u koje se prepisuje vrednost prosleđena prilikom poziva funkcije. 

Jedini način da nake vrednost ostane sačuvana posle izvršavanja funkcije je da se prosledi kao povratna vrednost naredbom return ili da se koriste globalne promenljive. 

Globalne ili eksterne promenljive definišu se izvan tela funkcije, kao što je prikazano na sledećem primeru:

```c
#include<stdio.h>

int x=10;                   /* definicija globalne promenljive */

void povecaj();

int main(){
 printf("x=%d",x);         /* stampanje vrednosti globalne promenljive   */
 povecaj();
 printf("\nx=%d",x);       /* stampanje globalne promenljive   */
 return 0;
}

void povecaj(){
 x=x+50;                   /* promena vrednosti globalne promenljive */
}

```

Pre funkcije main definisana je globalna promenljiva x tipa int, koje se koristi u funkciji main za ispis, a u funkciji povecaj joj se menja vrednost. Kada pokrenemo program dobijamo prvo vrednost promanljive x 10, a zatim 60, što znači da je promena napravljena u funkciji povećaj ostala sačuvana u globalnoj promanljivoj x i posle izvršavanja funkcije. 

Sve globalno definisane promenljive vidljive su u svim funkcijama koje su navedne ispod definicije promenljive u programskom kodu. U primeru definicija globalne promenljive x je navedena prva u programskom kodu te je vidljiva u svim funkcijama.   

Globalne promenljive se upotrebljavaju kada je neophodno pristupati promenljivoj u više funkcija i ako ne želimo da koristimo parametre funkcija. Korišćenje globalnih promenljivih može imati određene negativne posledice i zahteva opreznost, jer veliki broj funkcija može da menja vrednost promenljive. Zbog toga je u velikim programima teško ispratiti stanje neke globalne promenljive. Fenomen promene vrednosti neke globalne promenljive u funkcijama naziva se sporedni efekat funkcije (eng. side effect).

Ako se u nekoj funkciji definiše promenljiva sa istim imenom kao globalna promenljiva u toj funkciji se koristi vrednost lokalne promenljive. 

```c
#include<stdio.h>

int x=10;
int main(){
 int x = 0;
 printf("x=%d",x);
 return 0;
}
```

Ovaj program ima globalnu i lokalnu promanljivu x, prilikom pokretanja programa na konzolu će se ispisati vrednost lokalne promenljive, odnosno x=0. 



