---
title: Dinamičke strukture podataka, liste
author: RAF
---
## Dinamičko upravljanje memorijom
Dinamička alokacija memorije omogućava programerima eksplicitno i fleksibilno upravljanje memorijom koja je u nekim slučajevima neophodna, a u nekim predstavlja prihvatljivije rešenje. 
U C-u postoje četiri ugrađane funkcije iz biblioteke stdlib.h koje omogućavaju dinamičko upravljanje memorijom:
<br>malloc - alocira zadati broj bajtova koji se zadaje kao argument,
<br>realloc - povećava ili smanjuje veličinu memorijskog bloka, ako je potrebno vrši se promena lokacije bloka u memoriji,
<br>calloc -  alocira određeni broj bajtova i resetuje ih na nulu, ova funkcija ima dva argumenta, prvi je broj elemenata za koje treba alocirati memoriju, a drugi je broj bajtova koje tip elementa zauzima u memoriji, 
<br>free - oslobaća blok memorije i vraća je operativnom sistemu. 

Umesto da deklarišemo niz automatski sa 
```c
int array[10];
```
možemo ga deklarisati korišćenjem pokazivača i dinamičke alokacije:
```c
int *array = malloc(10*sizeof(int));
```
Ovom naredbom zauzeće se 40 bajtova memorije, i vratiti pokazivač na prvu memorijsku adresu u alociranom delu memorije. 
Kada se memorija alocira sa malloc u toj memoriji se mogu nalaziti neke zaostale vrednosti, ukoliko želimo da očistimo taj deo memorije i postavimo ga na vrednost 0, koristimo funkciju calloc na sledeći način:
```c
int *array  = calloc(10, sizeof(int));
```
Kada nam promenljiva više ne treba, zauzetu memoriju oslobađamo sa
```c
free(array);
```
Veličinu niza možemo da povećamo korišćenjem funkcije realloc, na primer
```c
array = realloc(array, 20* sizeof(int));
```
Ukoliko ove funkcije ne uspeju da izvrše alokaciju memorije, vraća se NULL pokazivač. 
Sve funkcije za alokaciju memorije vraćaju tip podataka &ast;void, što znači pokazivač na nepoznati tip. Ovim se izaziva nesigurno ponašanje i u mnogim programskim jezicima je zabranjeno. Da bismo izbegli problem sa tipovima dovoljno je da kastujemo rezultat funkcija malloc, calloc na sledeći način:
```c
int *array = (int *) malloc(10*sizeof(int)).
```
## Dinamičke strukture podataka
Strukture podataka u programima možemo podeliti na dve vrste, to su statičke strukture podataka i dinamičke strukture podataka. Statičke strukture podataka su fiksne veličine i ta veličina se određuje u fazi kompajliranja programa. U ove strukture podataka spadaju na primer nizovi, jer njihovu veličinu zadajemo prilikom deklaracije. Nasuprot statičkim strukturama postoje i dinamičke strukture podataka čija veličina može da se menja u toku izvršavanja programa. 

Statičke strukture se u programima brže obrađuju, ali je njihova mana što mogu zauzimati mnogo više od potrebne memorije. U tom smislu dinamičke strukture imaju prednost jer koriste tačno onoliko memorije koliko je potrebno, ali su, sa druge strane one teže za implementaciju jer je potrebno implementirati i deo koji se odnosi na upravljanje memorijom. Dinamičke strukture podataka se implementiraju korišćenjem pokazivača. 

Jedan primer upotrebe dinamičke strukture je predstavljanje slabo popunjene matrice (matrica čija je većina elemenata nula). Umesto da pamtimo dvosimenzionalni niz koji će biti većinom popunjen nulama i time nepotrebno zauzimamo memoriju, možemo napraviti dinamičku strukturu u kojoj ćemo pamtiti vrstu, kolonu i vrednost samo za element matrice čija je vrednost različita od nule.
Primeri dinamičkih struktura podataka su liste, gde razlikujemo jednostruko povezane i dvostruko povezane liste, zatim stabla, grafovi, itd. 

## Jednostruko povezana lista
Osnovna dinamička struktura podataka je lista. Na sledećoj slici dat je grafički prikaz jednostruko povazane liste. Kod jednostruko povezane liste susedni elementi liste povezani su jednom vezom. Svaki element liste sadrži neki podatak i referencu (pokazivač) na sledeći element liste. Poseban značaj ima pokazivač na prvi element liste, koji se često zove i glava liste. Kod poslednjeg elementa liste vrednost pokazaviča na sledeći element je NULL. 

![lista](media/nedelja_11/lista.png)

Jednostruko povezana lista celih brojeva u C implementira se preko strukture na sledeći način: 
```c
typedef struct Element {
	int podatak;
	struct Element *sledeci;
}Element;
```
Promenljiva tipa liste predstavlja se kao pokazivač na prvi element liste:
```c
Element *glava= NULL;
```
Ovom naredbom deklariše se prazna lista, tako što navedemo da je glava liste NULL pokazivač. 
Pojedinačni elementi liste često se nazivaju čvorovi i struktura za kreiranje liste može da ima i drugačije nazive, umesto Element može se koristiti naziv Cvor ili Node. Takođe, podatak u strukture može biti različitog tipa, a elementi liste mogu da sadrži i više podataka različitog tipa. Na primer možemo napraviti listu koja sadrži podatke o studentima i ima ime, prezime i broj poena studenta. Ovakva lista implementirala bi se sledećom strukturom:

```c
typedef struct ElementStudent{
	char *ime;
	char *prezime;
	float *brojPoena;
	struct ElementStudent *sledeci;
} ElementStudent;
```
Ono što je zajedničko za sve jednostruko povezane liste je da elementi moraju imati pokazivač na sledeći element liste. 
Nad opisanim strukturama mogu se implementirati mnoge operacije nad listom, kao što su dodavanje elementa u listu, izbacivanje elementa iz liste i obilazak liste radi ispisa elemenata liste, prebrojavanja elemenata ili pronalaska određenog elementa u listi.

Funkcije za rad sa listama koje menjaju sadržaj liste (na primer dodavanje novog elementa) imaju kao ulazni podatak listu, koja je predstavljena kao pokazivač na prvi element liste, a kao rezultat vraćaju pokazivač na prvi element izmenjene liste. Drugi način za implementaciju funkcije sa listama je da se lista prosledi kao pokazivač na pokazivač na prvi element liste, tada se lista ustvari prosleđuje po referenci, a ne po vrednosti i nemamo povratnu vrednost iz funkcije.  

Funkcija za dodavanja elementa u listu se može posmatrati za više slučajeva, kada se element dodaje na početak liste, na kraj liste ili na određeno mesto ukoliko su elementi liste sortirani i tada govorimo u uređenoj listi. Kod funkcije za dodavanje elementa jedan argument je lista, a drugi element koji se dodaje koji može biti već kreiran i alociran element (čvor) liste ili samo podatak. Ako prosleđujemo samo podatak potrebno je u funkciji alocirati memoriju za novi element liste. 
Funkcija za dodavanje elementa na početak liste celih brojeva prikazana je na sledećem listingu. 
```c
Element* dodajNaPocetak(Element *glava, int broj){
    Element *novi = (Element*)malloc(sizeof(Element));
    novi->podatak = broj;
    novi->sledeci = glava;
    glava = novi;
    return glava;
}
```
Pošto se u ovoj funkciji prosleđuje samo podatak, prilikom dodavanja novog elementa u funkciji potrebno je alocirati memorijski prostor za novi element, u ovom primeru koristi se funkcija malloc. Zatim se tom elementu dodeljuju vrednosti, prosleđeni parametar kao podatak, a pokazivač na sledeći element je u stvari pokazivač na početak liste. Ostaje još da se pokazivač na glavu liste prebaci na novi element (jer dodajemo na početak) i da se tako dobijena nova lista vrati kao rezultat funkcije. 
Štampanje liste podrazumeva obilazak svakog elementa liste i ispis podatka za svaki element.
```c
void stampaj(Element *glava){
    Element *tekuci = glava;
    while(tekuci!=NULL){
        printf("%d, ", tekuci->podatak);
        tekuci = tekuci->sledeci;
    }
}
```
Većina operacija sa listama se može implementirati i rekurzivno. Kod rekurzivnih rešenja trivijalni slučaj za izlazak iz rekurzije je prazna lista, a korak ka trivijalnom slučaju je prelazak na sledeći element liste. Na primer operacija za štampanje liste se rekurzivno može implementirati na sledeći način:
```c
void stampajRek(Element *glava){
    if(glava==NULL)
        return;
    else{
        printf("%d ", glava->podatak);
        stampajRek(glava->sledeci);
    }
}
```
## Dvostruko povezana lista
Dvostruko povezana lista je struktura podataka kod koje se u svakom čvoru pamti referenca na sledeći i referenca na prethodni element u listi. 
Struktura u C-u kojom se implementira dvostruko povezana lista je:
```c
typedef struct Element{
	int podatak;
	struct Element *sledeci;
	struct Element *prethodni;
}Element;
```
Promenljiva tipa dvostruko povezane liste može se predstaviti isto kao promenljiva tipa jednostruko povezane liste, kao pokazivač na prvi element liste. Druga opcija je da se predstavi sa dve promenljive, jedna koja je pokazivač na prvi i jedna pokazivač na poslednji element liste.
```c
Element *glava = NULL;
Element *poslednji = NULL;
```
Na ovaj način dobijamo tip podataka koji omogućava jednostavno prikazivanje elementa liste od napred i od nazad, zatim dodavanje i brisanje elementa sa početka i kraja. Kod implementacije operacija nad dvostruko povezanom listom moramo voditi računa da se dva pokazivača moraju ažurirati. 








