## Relacioni operatori

Rezultat izvršavanja relacionih operatora je vrednost tačno ili netačno koje se u jeziku C predstavljaju celobrojnim vrednostima 0 za netačno i broj različit od nule za tačno. Relacioni operatori koriste se za poređenje vrednosti operanada, na primer da li su jednake ili različite, da li jedan operand ima veću vrednost od druge i slično. 

Relacioni operatori u programskom jeziku se dati su u tabeli. 

|Operator|Opis|	Primer A = 10, B=6|
|---------|-----|----------|
|==|proverava da li su dva operanda jednaka i vraća tačno ako jesu, inače vraća netačno|(A == B) je 0|
|!=|proverava da li su dva operanda različita i vraća tačno ako jesu, inače vraća netačno|(A != B) je 1| 
|>|proverava da li je vrednost levog operanda veća i vraća tačno ako jeste|(A > B) je tačno|
|<|proverava da li je vrednost levog operanda manja i vraća tačno ako jeste|(A < B) je 0|
|>=|proverava da li je vrednost levog operanda veća ili jednaka i vraća tačno ako jeste|(A >= B) je 1|
|<=|proverava da li je vrednost levog operanda manja ili jednaka vraća tačno ako jeste|(A <= B) nije 0|

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

###if-else naredba

Najčešći način za implementaciju grananja u programima je if-else naredba. 
Implementacija zadatka koji pronalazi i ispisuje veći od dva broja u C-u bi izgledala ovako:

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





