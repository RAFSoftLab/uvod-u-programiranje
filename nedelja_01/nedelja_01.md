# Funkcija main

Funkcija main je funkcija koja se izvršava kada se pokrene program. To je funkcija bez argumenata i najčešće ima povratnu vrednost tipa int. Sintaksa funkcije je:

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

U ovom objašnjenju uveli smo nekoliko važnih pojmava iz programiranja kao što su blok narebi, string, funkcija, biblioteka i svi ovi pojmovi biće detaljno objašnjenji u nastavku. 

# Funkcije printf i scanf
