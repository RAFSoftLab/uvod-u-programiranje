---
title: Matrice, pokazivači
author: RAF
---

## Multidimenzionalni nizovi

Multidimenzionalni nizovi su nizovi većih dimenzija, što znači da imamo nizove čiji su elementi nizovi, koji opet kao elemente mogu imati nizove. 

Multidimenzionalni nizovi deklarišu se na sledeći način:

```
tip naziv[velicina1][velicina2][velicina3]..[velicinaN]; 
```

## Matrice

Od multidimenzionalnih nizova najčešće se koristi dvodimenzionalni niz koji se još naziva i matrica, a to je niz čiji su elementi jednodimenzionalni nizovi i deklariše se na sledeći način:

```
tip dvodimenzionalniNiz [m][n];
```

Ovakav dvodimenzionalni niz se može predstaviti i kao tabela koja ima m vrsta i n kolona. 

Ako bismo imali matricu a[3][4], njene vrednosti bi se tabelarno mogle predstaviti na sledeći način:

![matrica](media/nedelja_08/matrice.png)

Ovde vidimo da se elementi jednodimenzionalnog niza identifikuju sa a[i][j] gde su i i j pozitivni celi brojevi i predstavljaju indekse nizova. 
Dvodimenzionalni nizovi se mogu inicijalizovati na sličan način kao jednodimenzionalni, dodelom vrednosti svim elementima niza na sledeći način:

```
int a[3][4] = {
    {0, 1, 2, 3} ,    /*  inicijalizacija vrste sa indeksom 0 */
    {4, 5, 6, 7} ,    /*  inicijalizacija vrste sa indeksom 1 */
    {8, 9, 10, 11}   /*  inicijalizacija vrste sa indeksom 2 */
};
```

Slično kao kod jednodimenzionlnih nizova navode se elementi nizova u vitičastim zagradama, ali pošto su elementi niza opet nizovi imamo opet elemente u vitičastim zagradama, kao elemente niza. 

## Pokazivači

Koncept pokazivača je nešto po čemu je prepoznatljiv programski jezik C. Sam koncept pokazivača prisutan je u mnogim programskim jezicima, negde eksplicitno kao u C-u, a negde implicitno, kao što je to programski jezik Java u kojoj su pokazivači "skriveni" i ne koriste se direktno u programima. 

Neke stvari se u C-u mogu implementirati lakše korišćenjem pokazivača, a neke stvari se mogu implementirati samo korišćenjem pokazivača. Svaki dobar programer bi trebalo da savlada koncept pokazivača.

## Adresa promenljive

Na sledećem listingu prikazan je program koji ispisuje memorijske adresa promenljivih p1 i p2. 

```c
#include <stdio.h>
int main () {
   int  p1;
   char p2[10];
   printf("Adresa promenljive p1 je %x\n", &p1  );
   printf("Adresa promenljive p2 je %x\n", &p2  );
   return 0;
}
```
Jedan od mogućih izlaza ovog programa je:

```
Adresa promenljive p1 je 28ff3c
Adresa promenljive p2 je 28ff20
```
Oznaka &p1 predstavlja memorijsku adresu promenljive p1. Kad se program pokrene za svaku promenljivu se rezerviše određeno mesto u memoriji koje ima svoju adresu. Ta adresa je broj koji se može ispisati u bilo kom formatu. Ovde imamo ispis brojeva u heksadecimalnom formatu koji predstavljaju adrese promenljivih u memoriji. Druga oznaka za prikaz adrese je %p koja prikazuje kompletan heksadecimalni broj, sa početnim nulama koje su izostavljene sa oznakom %x. 

## Promenljiva pokazivač

Pokazivač se može definisati kao promenljiva čija vrednost je adresa neke druge promenljive, tj. direktna adresa u memoriji. Otuda i naziv pokazivači, jer oni ne predstavljaju prave vrednosti već pokazuju na neke vrednosti u memoriji. Veličina promenljive pokazivač je 4 bajta. 

Pokazivači predstavljaju posebnu vrstu promenljive i deklarišu se na sledeći način:

```
tip *nazivPromenljive;
```
Tip se odnosi na promenljivu na koju pokazuje pokazivač. Znak * (asterisk) označava da se radi o pokazivaču, a naziv promenljive predstavlja naziv pokazivača. 

Primeri deklaracije pokazivača:
```
int    *ip;         /* pokazivač na int      */
double *dp;         /* pokazivač na double   */
char   *ch;         /* pokazivač na karakter */
```

Ako deklarišemo pokazivač sa int &ast;ip imamo dva podatka:
<ul>
<li>ip je memorijska adresa promenljive koja je tipa int,</li>
<li> &ast;ip predstavlja samu promenljivu tipa int na koju pokazuje ip i može se koristiti u izrazima kao bilo koja promenljiva tipa int.</li>
</ul>

Bez obzira na koji tip podataka pokazuje, vrednost svake promenljive koja je pokazivač je u stvari broj koji predstavlja memorijsku adresu. 


## Korišćenje pokazivača u programima

Primer programa koji koristi pokazivače prikazan je na sledećem listingu. U njemu se vrši dodela vrednosti pokazivača. Vrednost koja se može dodeliti pokazivaču je adresa promenljive. 

```c
int main () {
   int  var = 20;
   int  *ip;
   ip = &var;
   printf("Adresa promenljive var: %x\n", &var);
   printf("Adresa skladistena u pokazivacu ip: %x\n", ip);
   printf("Vrednost promenljive na koju pokazuje ip: %d\n", *ip);

   printf("Vrednost promenljive var je %d\n", var);
   *ip = 30;
   printf("Nova vrednost promenljive var je %d\n", var);
   return 0;
}
```

Kada pokrenemo ovaj program videćemo da &var (adresa promenljive var) i ip (pokazivač na promenljivu var) imaju istu vrednost. Sa  &ast;ip pristupamo samoj promenljivoj, vrednost &ast;ip će biti vrednost promenljive na koju pokazuje ip.  

Kada promenimo vrednost za &ast;ip, istovremeno menjamo vrednost promenljive var na koju pokazuje ip, jer se radi o istim memorijskim lokacijama.  

Vrednost se pokazivaču može dodeliti i u samoj deklaraciji sa int &ast;ip = &var. Ova naredba dodeljuje vrednost promenljivoj ip, i radi istu stvar kao kad napišemo

```
int *ip;
ip = &var;
```

Postoji jedna posebna vrednost za pokazivač, a to je NULL. Pokazivaču se može dodeliti vrednost NULL što označava da pokazivač ne pokazuje ni na šta. Vrednost NULL pokazivača je adresa sa brojem 0. Memorijska lokacije sa oznakom 0 je rezervisana za operativni sistem i ne sme joj se pristupati u programima, ona ovde samo predstavlja konstantu koja se dodeljuje NULL pokazivaču i označava da pokazivač ne pokazije ni na šta. 

```
int *pok = NULL;
```
Da bismo proverili da pokazivač ima vrednost NULL možemo koristiti if naredbu:

<ul>
<li>if(pok) - tačno ako pok nije NULL</li>
<li>if(!pok) - tačno ako pok jeste NULL.</li>
</ul>

## Nizovi su pokazivači

Nizovima se u C-u može upravljati preko pokazivača. Naziv niza je pokazivač na prvi element niza. Drugim rečima, ako deklarišemo niz:

```
int niz[10]
```

promenljivu sa nazivom niz mozemo dodeliti pokazivaču na sledeći način:
```
int *p;
int niz[10];
p = niz;
```
Promenljive deklarisane kao nizovi su istog tipa kao promenljve deklarisane kao pokazivači (tip elemenata niza treba da je isti kao tip na koji pokazuje pokazivač). Gornjim programskim fragmentom p dobija vrednost pokazivača na prvi element niza. Elementima niza možemo pristupati sa &ast;p, &ast;(p+1), &ast;(p+2),... Ovo je ilustrovano u programu koji je prikazan na sledećem listingu 

```c
#include <stdio.h>

int main () {
   double bilans[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
   int i;
   p = bilans;
   printf( "Ispis vrednsoti niza preko pokazivaca p\n");
   for ( i = 0; i < 5; i++ ) {
      printf("*(p + %d) : %.1f\n",  i, *(p + i) );
   }
   printf( "Ispis vrednosti elemenata niza preko promenljive bilans\n");
   for ( i = 0; i < 5; i++ ) {
      printf("*(bilans + %d) : %.1f\n",  i, *(bilans + i) );
   }
   return 0;
}
```
U programu je kreirana promenljiva bilans koja je tipa niz, zatim je pokazivaču p dodeljena vrednost promenljive bilans, odnosno sada imamo dve promenljive, to su bilans i p koje pokazuju na prvi element niza. U dve for petlje ilustrovan je prikaz elemenata niza preko ove dve promenljive. Ono što je ovde bitno primetiti je da je pokazivač p deklarisan kao double, što odgovora tipu elemanata niza.

## Aritmetičke operacije sa pokazivačima

Pokazivač je u C-u adresa promenljive odnosno broj i nad njim se mogu vršiti neke aritmetičke operacije slično kao i sa drugim brojevnim tipovima. Četri aritmetičke operacije se mogu koristiti sa pokazivačima: ++, -- , +, -. 

Izvršavanje aritmetičkih operacija nad pokazivačima ilustrovaćemo na jednom primeru inkrementacije (povećanja za 1). Pretpostavimo da smo deklarisali pokazivač na int na sledeći način: 

```
int *pok
```

Zatim pretpostavimo da je vrednost pokazivača pok jednaka 1000 (u decimalnom brojevnom sistemu) i da su brojevi tipa int na našoj platformi predstavljeni sa 4 bajta (32 bita), pozivom aritmetičke operacije ++ dobija se sledeća memorijska lokacija, odnosno preskače se cela veličina int-a. Naredba pok++ će promeniti vrednost promenljive pok na 1000+4 = 1004. 

Ako bi pok pokazivao na karakter, koji je veličine jednog bajta, operacija pok++ bi promenila vrednost pok-a na 1001. 

Korišćenjem aritmetičke operacije za inkrementaciju nad pokazivačima može se implementirati pristup elementima niza kako je to prikazano na sledećem lisitingu. 

```c
#include <stdio.h>
int main(){
   int MAX = 3;
   int  var[] = {10, 100, 200};
   int  i, *ptr;
   ptr = var;
   for ( i = 0; i < MAX; i++) {
      printf("Adresa elementa var[%d] = %x\n", i, ptr);
      printf("Vrednost elementa var[%d] = %d\n", i, *ptr);
      /* pomeranje na sledecu memorijsku lokaciju odnosno sledeci element niza*/
      ptr++;
   }
   return 0;
}
```
Ako bismo hteli da ispišemo elemente niza od poslednjeg ka prvom, koristili bi dekrementaciju (--). Operacije dekrementacije (smanjivanje za 1) funkcioniše analagno inkrementaciji, odnosno, vrednost pokazivača se smanjuje za veličinu tipa promenljive na koju pokazuje. Ovde bismo za početnu vrednost pokazivača ptr dodelili adresu poslednjeg elementa niza, odnosno:

```
ptr = &var[MAX-1];
```
Prilikom dodele prvog elementa niza nismo koriristili adresu već promenljivu var koja ja tipa niz, što je u C-u isto što i tip pokazivača na prvi element niza. 

## Poređenje pokazivača

Pokazivači se mogu porediti korišćenjem relacionih operatora ==, <, >. Na sledećem listingu prikazan je program koji ispisuje elemente niza u while petlji čiji je uslov rezultat relacionog operatora nad pokazivačima. U uslovu while petlje se pitamo da li je pokazivač ptr, koji će redom pokazivati na elemente niza, manji ili jednak od adrese poslednjeg elementa niza. Brojač i ovde koristimo samo zbog ispisa rednog broja elementa niza. 

```c
#include <stdio.h>

int main (){
   int MAX = 3;
   int  var[] = {10, 100, 200};
   int  i, *ptr;
   ptr = var;
   i = 0;
   while ( ptr <= &var[MAX - 1] ) {
      printf("Adresa elementa var[%d] = %x\n", i, ptr );
      printf("Vrednost elementa [%d] = %d\n", i, *ptr );
      ptr++;
      i++;
   }
   return 0;
}
```
## Pokazivač na pokazivač

Moguća je konstrukcija da pokazivač pokazuje na promenljivu koja je opet pokazivač. Na ovaj način može se napraviti lanac pokazivača.

Kada deklarišemo pokazivač koji pokazuje na pokazivač prvi pokazivač sadrži adresu drugog pokazivača, a drugi pokazivač adresu promenljive koja sadrži konkretnu vrednost. 

Deklaracija pokazivača na pokazivač postiže se duplom oznakom za pokazivač (&ast;):
```
int **pok;
```
Kada se pristupa konkretnoj vrednosti promenljive preko dva povezana pokazivača koristi se isti znak (&ast;&ast;), kao što je to prikazano u programu na sledećem listingu.

```c
#include <stdio.h>

int main () {
   int  var;
   int  *ptr;
   int  **pptr;  // pokazivac na pokazivac
   var = 3000;
   ptr = &var;
   pptr = &ptr;  // adresa promenljive koja je pokazivac
   printf("var = %d\n", var );
   printf("*ptr = %d\n", *ptr );
   printf("**pptr = %d\n", **pptr);
   return 0;
}
```
## Pokazivači kao parametri funkcije

Funkcije mogu imati pokazivače kao ulazne parametre ili povratne vrednosti. 

Primer definicije funkcije koja prima tip podataka pokazivača kao ulazni parametar je

```
int funkcija(int *param1, char *param2);
```

Ova funkcija ima dva ulazna parametra to su param1 koji je pokazivač na int i param2 pokazivač na char.

U sledećem primeru programa data je funkcije koja koristi pokazivače kao ulazne parametre, to je funkcija zameni_brojeve koja vrši zamenu vrednosti brojeva (prvom broju dodeljuje vrednost drugog, a drugom broju vrednost prvog). 

```c
#include <stdio.h>

int zameni_brojeve(int *broj1, int *broj2);

int main(){
    int a = 4, b = 7;
    printf("Pre zamene: a=%d, b=%d\n", a, b);
    zameni_brojeve(&a, &b);  // prosleđujemo adrese promenljivih
    printf("Posle zamene: a=%d, b=%d", a, b);
    return 0;
}

int zameni_brojeve(int *broj1, int *broj2){
    int pom;
    pom = *broj1;
    *broj1 = *broj2;
    *broj2 = pom;
    return 0;
}
```
Funkcija koristi pomoćnu promenljivu pom, u koju se privremeno smešta vrednost jednog broja. Funkcija prima dve adrese int promenljivih, zato joj se kao parametri u pozivu prosleđuju adrese promenljivih a i b, odnosno &a i &b. 

Kada se u funkciji promene vrednosti promenljivih čije adrese su prosleđene kao parametri, menjaju se direktno vrednosti na memorijskim lokacijama i ove vrednosti ostaju sačuvane i posle izvršavanja funkcije. Ovaj princip se u C-u zove prosleđivanje po referenci jer se ne prosleđuju promenljive već adrese tih promenljivih odnosno referenca na njih. Prosleđivanje po referenci se može implementarati jedino korišćenjem pokazivača i ne predstavlja pravi pojam prosleđivanja po referenci već njegovu simulaciju pomoću pokazivača (neki programski jezici imaju pojam prosleđivanje po referenci, u C-u se ovaj koncept simulira korišćenjem pokazivača).

Da li se funkcija zamene vrednosti brojeva može implementirati bez pokazivača? Odgovor je ne, osim ako se koriste neke složenije strukture podataka koje sadrže dva elementa koje će se vratiti kao rezultat izvršavanja funkcije.  

Pokazivač može da bude i povratna vrednost iz funkcije, što se definiše na sledeći način:

```
int * funkcija();
```

Ovako deklarisana funkcija vraća pokazivač na int. Kod implementacije ove funkcije, može nastati problem ako vraćamo pokazivač na neku lokalnu promenljivu koju smo napravili u funkciji.

Postoje i pokazivači na funkcije, a jedan primer deklaracije je
```
void (*funkcija) (int)
```
Ovde je deklarisan pokazivac na funkciju funkcija koja nema povratnih vrednosti i ima jedan ulazni parametar tipa int. 

## Nizovi kao parametri funkcija

Nizovi se mogu presleđivati kao parametri funkcija. Primer funkcije koja prima niz kao ulazni parametar je

```
int funkcija(int niz[]) 
```

Vrlo često se kao parametar funkcije pored niza prosleđuje i dužina niza koja će se koristiti u funkciji kao ograničenje brojača indeksa za pristup elementima niza. 

Na sledećem listingu prikazan je primer funkcije koja kao parametar prima niz, a prosleđuje se i veličina niza kao poseban parametar. Funkcija računa prosečnu vrednost svih elemenata niza. 

```c
#include <stdio.h>

float prosek(float niz[], int duzina);

int main(){
    float niz1[] = {1.0, 7.0, 5.0, 20.0, 6.0};
    float p = prosek(niz1, 5);
    printf("prosek = %.1f\n", p);
    return 0;
}

float prosek(float niz[], int duzina){
    float suma = 0.0;
    int i;
    for(i=0; i<duzina; i++){
        suma+=niz[i];
    }
    return suma/duzina;
}
```
Prilikom definisanja funkcije koja prima niz kao parametar moguće je navesti i veličinu niza, na primer:

```
int funkcija(int niz[3]);
```

Ovako se definiše funkcija koja kao parametar prima niz od tri elementa. Međutim, ovoj funkciji se kao parametar može proslediti niz sa proizvoljnim brojem elemenata. 

Umesto korišćanja tipa podataka niz, za deklarisanja funkcije koja prima niz kao parametar može se staviti parametar tipa pokazivač, jer su nizovi isto što i pokazivači na prvi element niza. 

```
int funkcija(int *niz);
```

Funkcija prosek iz prethodnog primera se moze definisati i na sledeći način
```
float prosek(float *niz, int duzina);
```
Ovako definisana funkcija poziva se na isti način kao funkcija definisana sa nizom kao ulaznim parametrom, što znači da joj se u pozivu može proslediti niz ili pokazivač. 
