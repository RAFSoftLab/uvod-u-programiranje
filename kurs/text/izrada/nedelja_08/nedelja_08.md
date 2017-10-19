---
title: Matrice, pokazivači
author: RAF
---

## Multidimanzionalni nizovi

Multidimenzionalni nizovi su nizovi većih dimenzija, što znači da imamo nizove čiji su elementi nizovi, koji opet kao elemente mogu imati nizove. 

Multidimenzionalni nizovi deklarišu se na sledeći način:

```
tip naziv[velicina1][velicina2][velicina3]..[velicina4]; 
```

## Matrice

Od multidimenzionalnih nizova najčešće se koristi dvodimenzionalni niz koji se još naziva i matrica, a to je niz čiji su elementi jednodimenzionalni nizovi i deklariše se na sledeći način:

```
tip dvodimenzionalniNiz [m][n];
```

Ovakav dvodimenzionalni niz se može predstaviti i kao tabela koja ima m vrsta i n kolona. 

![alt text](media/nedelja_08/matrice.png)

Ako bismo imali niz a[2][3], njegove vrednosti bi se tabelarno mogle predstaviti na sledeći način:

Ovde vidimo da se elementi jednodimenzionalnog niza identifikuju sa a[i][j] gde su i i j pozitivni celi brojevi i predstavljaju indekse nizova. 
Dvodimenzionalni nizovi se mogu inicijalizovati na sličan način kao jednodimenzionalni, dodelom vrednosti svim elementima niza na sledeći način:

```
int a[3][4] = {
    {0, 1, 2, 3} ,    /*  inicijalizacija vrste sa indeksom 0 */
    {4, 5, 6, 7} ,    /*  inicijalizacija vrste sa indeksom 1 */
    {8, 9, 10, 11}   /*  inicijalizacija vrste sa indeksom 2 */
};
```

Slično kao kod jednodimenzionlnih nizova navode se elementi nizova u vitičastim zagradama, ali pošto su elementi niza opet nizovi umesto jednostavnih vrednosti imamo opet elemente u vitičastim zagradama. 

## Pokazivači

Koncept pokazivača je nešto po čemu je prepoznatljiv programski jezik C. Sam koncept pokazivača prisutan je u mnogim programskim jezicima negde eksplicitno kao u C-u, a negde implicitno, kao što je to programski jezik Java u kojoj su pokazivači "skriveni" i ne koriste se direktno u programima. 

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
Oznaka &p1 predstavlja memorijsku adresu promenljive p1. Kad se program pokrene za svaku promenljivu se rezerviše određeno mesto u memoriji koje ima svoju adresu. Ta adresa je broj koji se može ispisati u bilo kom formatu. Ovde imamo ispis brojeva u heksadecimalnom formatu koji predstavljaju adrese promenljivih u memoriji. Druga oznaka za prikaz adrese je %p koja prikazuje kompletan heksadecimalni broj, sa početnim nulama koje su izostavljene sa oznakom %x. Veličina promenljive pokazivač je 4 bajta.

## Promenljiva pokazivač

Pokazivač se može definisati kao promenljiva čija vrednost je adresa neke druge promenljive, tj. direktna adresa u memoriji. Otuda i naziv pokazivači, jer oni ne predstavljaju prave vrednosti već pokazuju na neke vrednosti u memoriji.  

Pokazivači predstavljaju posebnu vrstu promenljive i deklarišu se na sledeći način:

```
tip *nazivPromenljive;
```
Tip se odnosi na promenljivu na koju pokazuje pokazivač. Znak * (asterisk) označava da se radi o pokazivaču, a naziv promenljive predstavlja naziv pokazivača. 

Primeri deklaracije pokazivača:
```
int    *ip;         /* pokazivač na int */
double *dp;    /* pokazivač na double */
char   *ch;     /* pokazivač na karakter */
```

Treba razlikovati dve stvari, ako deklarišemo pokazivač sa int &ast;ip, imamo u programima imamo dva podatka:
<ul>
<li>ip je memorijska adresa promenljive koja je tipa int,</li>
<li> &ast;ip predstavlja u stvari samu promenljivu koja se može koristiti u izrazima kao bilo koja promenljiva tipa int.</li>
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

Kada pokrenemo ovaj program videćemo da &var (adresa promenljive var) i ip (pokazivač na promenljivu var) imaju istu vrednost. Sa  &ast;ip pristupamo samoj promenljivoj, osnosno vrednost &ast;ip će biti vrednost promenljive na koju pokazuje ip.  

Kada promenimo vrednost za  &ast;ip, ustvari menjamo vrednost promenljive var na koju pokazuje ip.





