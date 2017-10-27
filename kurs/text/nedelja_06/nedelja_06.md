---
title: Rekurzija
author: RAF
---

## Pojam rekurzije

Pojam rekurzije potiče iz matematike i ima veliku primenu u programiranju. U matematičkom smislu rekurzija predstavlja definisanje problema uz pomoć samog tog problema. U matematici postoji veliki broj primera rekurzije, a najpoznatiji su Fibonačijevi brojevi koji se definišu na sledeći način:

F(n) = F(n-1)+F(n-2). 

Ovaj izraz znači da se n-ti fibonačijev broj izračunava kao zbir n-1-og i n-2-og fibonačijevog broja, koji se opet izračunavaju na isti način kao n-ti broj.

Drugi način definisanja rekurzije kaže da rekurzija predstavlja način definisanja problema preko pojednostavljene verzije istog tog problema. Jedan primer kojim se ovo može opisati je rešavanje problema pronalaska puta do kuće (problem ćemo označiti izrazom “pronađi put do kuće”). Rekurzijom bi se ovaj problem mogao opsati u tri koraka, na sledeći način:

<ol>
<li>ako si kod kuće, ostani u mestu</li>
<li>inače, napravi jedan korak prema kući</li>
<li>pronađi put do kuće</li>
</ol>

Tačka pod brojem 3 u ovom opisu problema predstavlja poziv istog problema iz definicije, ali posle učinjene jedne jednostavne akcije, a to je jedan korak prema kući, problem je pojednostavljen. 

Opisani postupak se može uopštiti, čime dobijamo generalni algoritam koji rešava probleme rekurzijom, i on se sastoji od sledeća tri koraka:

<ol>
<li>trivajlni slučaj (kojim se prekida proces izračunavanja)</li>
<li>izvršavanje jedne akcije koja nas vodi ka trivijalnom slučaju</li>
<li>rekurzivni poziv</li>
</ol>
Ovako opisani postupak rešavanja problema ima algoritamski oblik i za većinu problema se može implementirati. 

Kako bismo opisali algoritam za izračunavanje faktorijela nekog broja rekurzijom (faktorijel je n! = n*(n-1)*..*1, i važi 0! = 1).

Odgovor:
<ol>
<li>trivijalni slučaj je n=0, i u ovom slučaju izlazimo iz rekurzije</li>
<li>trenutni rezultat pomnožimo sa n i smanjimo n za 1 (ovim smo se približili trivijalnom slučaju, jer smanjivanjem broja n idemo ka nuli)</li>
<li>rekurzivni poziv za novo n</li> 
</ol>


## Implementacija rekurzije

Rekurzija se implementira preko funkcija i predstavlja pojavu u kojoj funkcija poziva samu sebe. Korišćenjem rekurzije moguće je simulirati rad petlje, odnosno ponavljanja bloka naredbi. Rekurzija se često koristi u rešavanju raznih matematičkih problema, kao što su izračunavanje faktorijela nekog broja, fibonačijevih brojeva i sl, ali se koristi i u programerskim zadacima kao što su sortiranje nizova, pretraživanje složenih struktura podataka i rešavanje složenih programerskih problema (na primer raspored kraljica na šahovkoj tabli).

```
void recursion() { 
   ...
  recursion(); /* funkcija poziva samu sebe */
  ...
}

int main() {  
  recursion(); /* poziv rekurzivne funkcije */	
}
```

U implementaciji rekurzije moramo biti oprezni da ne izazovemo beskunačnu petlju. Na primer, ako bismo hteli da implementiramo program koji računa zbir prvih n prirodnih brojeva, ovaj problem bismo mogli da definišemo rekurzivno na sledeći način, suma prvih n brojeva je jednaka sumi prvih n-1 brojeva plus broj n. Ako ovu logiku implementiramo direktno dobijamo program koji je dat na sledećem listingu. Međutim, ovaj program će ući u beskonačnu petlju, jer funkcija suma stalno poziva sama sebe.   

```c
#include <stdio.h>
#include <stdlib.h>

int suma(int n);

int main()
{
   int n = 6;
   int rez = suma(6);
   printf("Suma prvih %d brojeva je %d \n", n, rez);
   return 0;
}

int suma(int n){
   int rez;
   rez = n + suma(n-1);
   return rez;
}
```

Da bi se izbegla beskonačna petlja u rekurzivnom pozivu, mora se uvesti trivijalni slučaj, odnosno slučaj koji predstavlja izlaz iz rekurzije. U primeru sabiranja prvih n prirodnih brojeva, za slučaj n=1 zbir prvih n prirodnih brojeva ne zahteva sabiranje već odmah možemo vratiti rezultat. Ovde smo u funkciji suma dodali slučaj za n=1 koji ne ulazi u rekurziju već samo vraća vrednost funkcije i to nam je trivijalni slučaj. Na ovaj način petlja poziva funkcije suma se zaustavlja u momentu kada n dobije vrednost 1. 

```c
#include <stdio.h>
#include <stdlib.h>

int suma(int n);

int main()
{
   int n = 6;
   int rez = suma(6);
   printf("Suma prvih %d brojeva je %d \n", n, rez);
   return 0;
}

int suma(int n){
   int rez;
   if(n==1)
       return 1;
   rez = n + suma(n-1);
   return rez;
}
```


## Uzajamna rekurzija

Pored klasične rekurzije o kojoj je do sada bilo reči postoji i takozvana uzajamna ili indirektna rekurzija koja se odnosi na situaciju kada dve funkcije jedna drugu pozivaju rekurzivno. Na ovaj način fukcija ne poziva samu sebe direktno, nego posredno preko druge funkcije. Ova situacija se može opisati sledećim programskim fragmentom:


```
void funkcijaA(){	
      ...
      funkcijaB();
      ...
}

void funkcijaB(){
      ...
      funkcijaA();
      ....
}
```

Sledeći primer programa ilustruje uzajamnu rekurziju na primeru računanja da li je uneti broj paran ili neparan (ovo se može implementirati jednostavnije korišćenjem operatora za ostatak pri deljenju, ovde je cilj ilustracija koncepta uzajamne rekurzije). Implementirane su dve funkcije paran i neparan koje jedna drugu međusobno pozivaju. Logika koja je ovde implementirana je broj je paran ako je broj-1 neparan. I ovde imamo trivijalni slučaj za broj=0, koja će u funkciji paran vratiti 1, odnosno tačno jer je 0 paran broj, a u funkciji neparan će vratiti 0 odnosno netačno.

```c
#include <stdio.h>
#include <stdlib.h>

int neparan(int broj);
int paran(int broj);

int main ()
{

int broj;
printf("Unesite broj: \n");
scanf("%d", &broj);

if(neparan(broj))
   printf("%d je neparan\n",broj);
else
   printf("%d je paran\n",broj);
return 0;
}

int neparan(int broj){
if (broj==0)
   return 0;
else
   return paran(broj-1);
}

int paran(int broj){
if(broj==0)
   return 1;
else
   return neparan(broj-1);
}
```

<!--TODO: Inetersantni primeri primene rekurzije -->

