# Funkcija main

Funkcija main je funkcija koja se izvršava kada se pokrene program. To je funkcija bez argumenata i najčešće ima povratnu vrednost tipa int. Sam pojam funkcije će kasnije biti detaljnije objašnjen, za sada treba znati da funkcija ima svoje ime, može imati jednu povratnu vrednost i može imati nula ili više ulaznih parametara.  

Funkcija main je posebna funkcija u programskom jeziku C, jer kada neki program pokrenemo izvršavaju se naredbe koje su napisane u ovoj funkciji. 

Sintaksa funkcije main je:

```c
#include <stdio.h>
int main(){    
      printf("Zdravo!\n");
      return 0;
}
```
Ovde je dat primer jednostavnog programa u programskom jeziku C, ovaj program će na konzolu (sistemski izlaz) ispisati pozdrav "Zdravo!" a značenje pojedinačnih linija koda je sledeće:

include <stdio.h> - uvoz potrebnih biblioteka iz okruženja (već gotovih konstrukcija koje možemo da koristimo u našim programima), ovde je u pitanju standardna biblioteka za  ulaz i izlaz, odnosno učitavanje podataka sa konzole i ispis podataka na konzolu

*main()* – definicija funkcije pod nazivom „main“ koja nema ulaznih parametara, što je označeno praznim zagradama

*{* - početak bloka naredbi u kom je implementirana funkcija main
printf("Zdravo!\n"); - ispis na konzolu jednog stringa (niz karaktera pod navodnicima), oznaka \n predstavlja oznaku za novi red. Funkcija printf je uvezena iz standardne biblioteke i prima kao ulazni parametar string koji će se ispisati.

*return 0;* - povratna vrednost funkcije main(), ovde vraćamo broj nula koji označava pravilan izlazak iz programa, neki drugi broj (različit od 0) označava da program nije završen pravilno.  

*}* – kraj bloka u kom je implementirana funkcija main.

U ovom objašnjenju uveli smo nekoliko važnih pojmava iz programiranja kao što su blok naredbi, string, funkcija, biblioteka i svi ovi pojmovi biće detaljno objašnjenji u nastavku. 

# Funkcije printf i scanf

Programi koje ovde pravimo pisani su za *konzolu*. Konzola je jedan poseban računarski program koji je deo operativnog sistema preko koga je moguće vršiti komunikaciju sa programom ili operativnim sistemom bez grafičkog korisničkog interfejsa.  Preko konzole se komunikacija vrši samo korišćenjem tastature, i ona obuhvata ispis nekog teksta koji se prikazuje korisniku ili unos nekog teksta od strane korisnika programa.

U programskom jeziku C postoje dve ugrađene funkcije koje ćemo za sada koristiti za komunikaciju preko konzolu, to su funkcija *printf* koaj se koristi za ispis na konzolu i funkcija *scanf* koja se koristi za učitavanje sa konzole. U primeru za funkciju main koristili smo funkciju printf za ispis pozdrava na konzolu. 
