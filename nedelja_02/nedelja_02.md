## Relacioni operatori

Rezultat izvršavanja relacionih operatora je vrednost tačno ili netačno koje se u jeziku C predstavljaju celobrojnim vrednostima 0 za netačno i broj različit od nule za tačno. Relacioni operatori koriste se za poređenje vrednosti operanada, na primer da li su jednake ili različite, da li jedan operand ima veću vrednost od druge i slično. 

Relacioni operatori u programskom jeziku se dati su u tabeli. 

|Operator|Opis|	Primer A = 10, B=6|
|---------|-----|----------|
|==|proverava da li su dva operanda jednaka i vraća tačno ako jesu, inače vraća netačno|(A == B) je 0|
|!=|proverava da li su dva operanda različita i vraća tačno ako jesu, inače vraća netačno|(A != B) je 1| 
|>|proverava da li je vrednost levog operanda veća i vraća tačno ako jeste|(A > B) je 1|
|<|proverava da li je vrednost levog operanda manja i vraća tačno ako jeste|(A < B) je 0|
|>=|proverava da li je vrednost levog operanda veća ili jednaka i vraća tačno ako jeste|(A >= B) je 1|
|<=|proverava da li je vrednost levog operanda manja ili jednaka vraća tačno ako jeste|(A <= B) je 0|

## Logički operatori

Logički operatori kao operande uzimaju logičke promenljive, a to su tačno (true) i netačno (false) odnosno u C-u je to celobrojni tip pri čemu se vrednost 0 tumači kao netačno, a sve različito od nula kao tačno. Postoje tri relaciona operatora, to su i, ili i negacija.

|Operator|Opis|Primer, A=1, B=0|
|--------|----|----------------|
|&&|logički operator i (and), tačan je ako su oba operanda tačna, odnosno u C-u veća od 0|(A && B) je 0|
|\|\||logički operator ili (or), tačan ako je bar jedan od operanada tačan|(A \|\| B) je 1|
|!|logička negacija (not), tačan ako je operand netačan i netačan ako je operand tačan|!(A && B) je 1|

Računanje vrednosti logičkih operacija ima neke specifičnosti. Na primer ako je u pitanju logičko i, ukoliko je vrednost prvog operanda netačna, rezultat operacije je netačan i drugi operand se ne računa kako bi se skratilo vreme izvršavanja programa. Slično, ako se kod logičkog ili dobije vrednost prvog operanda tačno, onda se drugi operand ne izračunava jer je vrednost operacije sigurno tačno. 
Posmatrajmo sledeći programski fragment

```c
int i = 0;
int a = i && i++
```

Pošto je vrednost promenljive i koja je prvi operand u logičkoj operaciji && jednaka 0 znači da će  logički operator && sigurno vratiti netačno jer vraća tačno samo ako su oba tačna. To znači da nije potrebno izračunati vrednost drugog operanda. U ovom slučaju u drugom operandu pozivamo unarni operator ++, ali se on neće izvršiti jer programski jezik C kao i mnogi drugi jezici ne izračunava drugi operand ako posle prvog može da vrati vrednost. 

## Operatori nad bitovima

Programski jezik C podržava operacije koje se izvršavaju direktno nad bitovima.Kao operatori ovakvih operacija najčešće se koriste celobrojni tipovi podataka koji se zapisuju u heksadecimalnom ili oktalnom formatu, a operacije se izvršavaju direktno nad bitovima kojima se predstavljaju ovi brojevi. 

Istinitosna tablica za operacije nad bitovima

|p|q|p & q|p\|q|p ^ q|
|---|---|:---:|:---:|:---:|
|0|0| 0|0|0|
|0|1| 0|1|1|
|1|1| 1|1|0|
|1|0| 0|1|1|

Operacije nad bitovima se mogu podeliti u dve grupe, to su logičke operacije i operacije pomeranja bitova. Sve operacije sa objašnjenjem date su u tabeli na primeru dve celobrojne vrednsoti A = 60, B = 13, njihova binarna reprezentacija je

A = 0011 1100,

B = 0000 1101.


|Operator|Opis|Primer A = 0011 1100, B = 0000 1101|
|--------|----|-----------------------------------|
|&|bitovna konjukcija|(A & B) je 0000 1100|
|\||bitovna disjunkcija|(A \| B) je 0011 1101|
|^|bitovna ekskluzivna disjunkcija - XOR, bit je setovan ako su dva ulazna bita različite vrednosti|(A ^ B) je 0011 0001|
|~|promena vrednosti bit-a|(~A ) je 1100 0011|
|<<|šiftovanje bitova u levo, iza znaka se zadaje broj za koliko se bitovi pomeraju u levo, za upraznjena mesta upisuje se 0|A << 2 je 1111 0000|
|>>|šiftovanje bitova u desno, iza znaka se zadaje broj za koliko se bitovi pomeraju u desno,  za upraznjena mesta upisuje se 0|A >> 2 je 0000 1111|

## Prioritet izvršavanja operacija

Programske konstrukcije i aritmetički izrazi mogu sadržati više operatora i postoji pravilo koje definiše redosled izvršavanja operacija. U donjoj tabeli prikazan je redosled prioriteta izvršavanja operatora. Operatori su poređani redom po prioritetu izvršavanja. 

|Vrsta|Operator|
|-----|--------|
|Unarni|! ~ ++ --| 
|Aritmetičke operacije množenje i deljenje|\* / %| 
|Aritmetičke operacije sabiranje i oduzimanje|+ -|
|Operacije sa bitovima|<< >>| 
|Relacione operacije|< <= > >=| 
|Relacione operacije|== !=| 
|Operacije sa bitovima|&| 
|Operacije sa bitovima|^| 
|Operacije sa bitovima|\|| 
|Logičko i|&&| 
|Logičko ili|\|\|| 
|Naredbe dodele|= += -= \*= /= %=>>= <<= &= ^= |=| 

Prioritet izvršavanja objasnićemo na sledećem primeru. Posmatrajmo izraz
```c
a += b \* ++c - 5
```
Kako unarna operacija ++ ima najveći prioritet prvo će se vrednost promenljive c povećati za jedan, zatim će se izvršiti operacija množenja (\*), jer ima veći prioritet u odnosu na oduzimanje. Pošto operator oduzimanja ima veći prioritet nego operator dodele vrednosti += , prvo će se izvršiti oduzimanje, pa će se tek onda promenljivoj a dodati vrednost dobijenog izraza. 
Prioritet izvršavanja operacija se može izmeniti korišćenjem zagrada ( i ). 
Tako u prethodnom primeru možemo da promenimo da se oduzimanje vrši pre množenja dodavanjem zagrada na sledeći način:
```c
a += b \* (++c - 5)
```
## Naredbe grananja

Jedan program predstavlja skup naredbi. Svaka naredba se u programskom jeziku C završava oznakom tačka-zarez. Program može biti sekvenca naredbi koje su se izvršavale redom jedna posle druge, međutim veliki broj zadataka koji se rešavaju programiranjem podrazumeva da se neke naredbe izvršavaju ili ne izvršavaju u zavisnosti od nekog uslova. U ovakvim slučajevima govorimo o nekoj vrsti grananja u programima i koristimo naredbe grananja. 

Pretpostavimo da treba napraviti program koji učitava dva broja i ispisuje koji je veći. Tekstalni opis rešenja bi bio:

```{r, eval = FALSE}
učitamo brojeve a i b
ako je a>b ispišemo a
inače ispišemo b.
```

Ovo je jedan jednostavan primer grananja u programima koji je označen rečju ako je. 

## if-else naredba

Najčešći način za implementaciju grananja u programima je if-else naredba. 
Implementacija zadatka koji u;itava dva broja i ispisuje koji je veći u C-u bi izgledala ovako:

```c
int main()
{
    int a, b;
    printf("Unesite prvi broj:");
    scanf("%d", &a);
    printf("Unesite drugi broj:");
    scanf("%d", &b);
    if(a>b){
       printf("Veci broj je %d", a);
    }else{
       printf("Veci broj je %d", b);
    }
    return 0;
}
```
Sintaksa if naredbe je sledeća


```{r, eval = FALSE}
if(uslov){
  blok naredbi koje će se izvršiti ako je uslov tačan (if grana)
}else{
  blok naredbi koje će se izvršiti ako uslov nije tačan (else grana)
}
```

Else grana ne mora da postoji, i u tom slučaju se deo koda u else grani neće izvršiti. 

Ukoliko u bloku naredbi imamo samo jednu naredbu i nemamo definiciju promenljivih ne moraju se pisati vitičaste zagrade. 

Uslov u if naredbi je neka logička vrednost. Kako je ranije naglašeno, programski jezik C nema klasičan logički tip podataka, pa je uslov u C-u brojčana vrednost i tumači se kao tačno za sve vrednosti različite od nule, odnosno netačno za vrednosti jednake nuli. 

Blokovi naredbi u if i else grani mogu sadržati i druge if naredbe, tako možemo imati sledeću strukturu programa:

```{r, eval = FALSE}
if(uslov1){
   if(uslov2){		
	naredba1;
   }else{
	naredba2;
   }
}else{
  naredba3;
}
```

Kod ovakvih slučajevima potrebno je voditi računa da se else grana pravilno pridruži odgovarajućoj if grani, a pravilo koje tom prilikom važi je da se svako else pridružuje najbližem if-u u prethodnom delu programa za koje nije navedeno drugo else. Radi lakšeg razumevanja programa koristi se uvlačenje, onako kako je to navedeno u primerima. 
Ukoliko imamo više uslova od kojih nam zavisi tok izvršavanja programa koristimo izraz else if kome se takođe može zadati uslov. Sintaksa je sledeća:

```{r, eval = FALSE}
if(uslov1){
   blok naredbi 1
}else if(uslov2){
   blok naredbi 2
}else if(uslov3){
  blok naredbi 3
}else{
  blok naredbi 4
}
```

Nema ograničenja na broj else if grana. Ni u slučaju postojanje else if grane nije obavezno navođenje else grane. 

Kako bismo proširili program za pronalaženje većeg od dva broja, sa još jednim uslovom da proverimo da li su dva broja jednaka? 

Rešenje:

```c
int main()
{
    int a, b;
    printf("Unesite prvi broj:");
    scanf("%d", &a);
    printf("Unesite drugi broj:");
    scanf("%d", &b);
    if(a==b)
       printf("Uneti brojevi su jednaki");
    else if(a>b)
       printf("Veci broj je %d", a);
    else
       printf("Veci broj je %d", b);
    return 0;
}
```
## Ternarni uslovni operator

Još jedan način grananja u C-u je korišćenjem posebnog operatora koji ima sledeću sintaksu:

```{r, eval = FALSE}
Izraz1 ? Izraz2 : Izraz3;
```

Vrednost izračunavanja operatora se dobija tako što se prvo izračuna vrednost izraza Izraz1 i ako je njegova vrednost tačno, kao rezultat operacije uzima se Izraz2, ako je vrednost netačna, rezultat je Izraz3. 

Na primer, ako posmatramo sledeći niz naredbi

```c
int a = 5;
a = (a>0) ? 10 : -10;
```
Nakon izvršavanja ovog niza naredbi vrednost promenljive a će biti 10, jer je vrednost izraza a>0 tačno i ternarni uslovni operator vraća vrednost prvog izraza, koji iznosi 10.

Na mestu izraza Izraz2 i Izraz3 mogu se navesti i naredbe, na primer

```c
int a = -5;
(a>0) ? printf("%d\n", a) :  printf("%d\n", 0-a);
```

Ovaj deo koda će na konzolu ispisati broj 5. 
Moguće je i ovako nešto:

```c
(a>0) ? a++ : a-- ; 
```

Ovde možemo videti da je uslovni operator sa upitnikom ustvari skraćeni zapis if-else naredbe. Ograničenje je da se za Izraz2 i Izraz3 može navesti samo jedna naredba, ali ne i blok naredbi. 

Mogu postojati i ugnježdeni uslovni operatori, na primer:

```c
(a==0) ? printf("nula") : (a>0) ? printf("pozitivan") : printf("negativan");
```

## Naredba switch 

Ako bismo dobili zadatak da napišemo program da za uneti redni broj dana u nedelji ispišemo njegov naziv i ako bismo pokušali da ga implementiramo korišćenjem if-else naredbe, morali bismo da koristimo više else-if grana. Kod ovakvih slučajeva, kada imamo uslov koji podrazumava neke višestruke vrednosti, koristi se naredba switch. Naredba switch ima sledeću sintaksu:


```{r, eval = FALSE}
switch(izraz) {
	case konstanta1 : blok naredbi 1
	case konstanta2 : blok naredbi 2
	...
	case konstantan : blok naredbi n
	default: blok naredbi
}
```

Pri čemu izraz mora biti nekog celobrojnog tipa (ovo važi za programski jezik C, u mnogim jezicima switch naredba podržava i druge tipove podataka), a konstante u case granama moraju biti istog tipa kao izraz. Pravilo je da ne mogu postojati dve case grane sa istom konstantom. 

Naredba switch se izvršava tako što se izračuna vrednost izraza i pronalazi se case grana čija je vrednost konstante jednaka vrednosti izračunatog izraza. Ukoliko se pronađe takva case grana izvršavaju se svi blokovi naredbi u svim case granama počevši od case grane čija konstanta se poklapa sa izrazom, pa do kraja switch naredbe. Ukoliko se vrednost izraza ne poklapa ni sa jednom case granom, izvršava se blok označen sa default, ukoliko postoji.

Najčešće nam je potreban slučaj da se izvrši samo jedna case grana i tada koristimo naredbu break. Ukoliko se naredba break navede na kraju bloka naredbi u case grane, preskače se izvršavanje svih ostalih case i default grane.

Rešenja zadatka sa danima u nedelji:  

```c
#include <stdio.h>
int main()
{
    int i;
    printf("Unesite broj od 1 do 7: \n");
    scanf("%d", &i);
    switch(i){
        case 1: printf("Ponedeljak"); break;
        case 2: printf("Utorak"); break;
        case 3: printf("Sreda"); break;
        case 4: printf("Cetvrtak"); break;
        case 5: printf("Petak"); break;
        case 6: printf("Subota"); break;
        case 7: printf("Nedelja"); break;
        default: printf("Pogresan broj");
    }
    return 0;
}
```

Ukoliko nam je potrebno da za više različitih konstanti navedemo isti niz naredbi, možemo grupisati case grane. Na primer, ako umesto naziva dana u nedelji zadatak formulišemo da se ispiše da li je radni dan ili vikend, korišćenjem switch naredbe taj zadatak možemo rešiti an sledeći način:

```c
switch(i){
        case 1: case 2: case 3: case 4: case 5: printf("Radni dan"); break;
        case 6: case 7: printf("Vikend"); break;
        default: printf("Pogresan broj");
    }
  ```


