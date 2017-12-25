---
title: Binarna stabla
author: RAF
---
## Struktura podataka binarno stablo
Binarno stablo je struktura podataka koja se sastoji od čvorova koji su međusobno povezani kao što je prikazano na sledećoj slici.

![stablo](media/nedelja_12/stablo.png)

Svaki čvor sadrži neki podatak plus može imati levo i desno podstablo. Svi čvorovi osim korenskog čvora imaju "roditelja", to je čvor iz koga polazi veza ka posmatranom čvoru. Korenski element nema roditelja, a posebnu vrstu čvorova čine listovi stabla, to su čvorovi kojima je i levo i desno podstablo prazno. Prazno stablo ne sadrži ni jedan čvor.

U računarstvu su posebno zanimljiva uređena binarna stabla koja se još nazivaju i binarna stabla pretrage (BST - binary search trees). To su binarna stabla za koje važi da su vrednosti svih elemenata u levom podstablu manja od vrednosti čvora, a svi elementi u desnom podstablu veći od vrednosti čvora. I to važi za sve čvorove u stablu. Ovakva struktura podataka ima veliku primenu u računarstvu jer se u njoj brže pronalaze podaci nego u listi ili u nizu i mi ćemo se baviti takvom strukturom.

## Implementacija binarnog stabla
U C-u  se binarno stablo može implementirati korićenjem strukture i pokazivača na sledeći način:

```c
typedef struct Cvor{
  int podatak;
  Cvor *levi, *desni;
}Cvor;
```

Ovom strukturom opisan je jedan čvor u binarnom stablu koji sadrži podatak i pokazivače na levo i desno podstablo. 
Binarno stablo se deklariše kao pokazivač na koren:

```c
Cvor *koren = NULL;  // kreiranje praznog binarnog stabla
```
Najčešće operacije nad uređenim binarnim stablom su:
<ul>
<li>dodavanje elemenata na odgovarajuće mesto u uređeno binarno stablo</li>
<li>ispis elemenata binarnog stabla</li>
<li>pronalazak elementa u binarnom stablu</li>
<li>brisanje pojedinačnog elemenata binarnog stabla</li>
<li>brisanje binarnog stabla i oslobađanje memorijskih resursa</li>
</ul>
Većina ovih operacija implementira se korišćenjem rekurzije.
Na sledećem listingu prikazana je funkcija za ubacivanje novog elementa u uređeno binarno stablo. Argumenti su pokazivač na koren stabla u koji se ubacuje element i element koji se ubacuje, a povratna vrednost je pokazivač na koren izmenjenog stabla.

```c
Cvor* ubaciCvor(Cvor *koren, int podatak){
    if(koren==NULL){
        Cvor *novi = (Cvor *)malloc(sizeof(Cvor));
        novi->podatak = podatak;
        novi->levi = NULL;
        novi->desni = NULL;
        return novi;
    }else{
        if(podatak<koren->podatak){
            koren->levi = ubaciCvor(koren->levi, podatak);
        }else{
            koren->desni = ubaciCvor(koren->desni, podatak);
        }
        return koren;
    }
}
```

Ubacivanje elementa implementirano je korišćenjem rekurzije. Sličaj za izlazak iz rekurzije je kada imamo prazno stablo u koje dodajemo element (koren==NULL) i tada kreiramo novi čvor kome će i levo i desno podstablo biti prazna stabla, a podatak je jednak argumentu funkcije. 
Ukoliko stablo nije prazno potrebno je da pronađemo mesto za novi element. Ako je podatak manji od vrednosti korena, novi čvor se ubacuje u levo podstablo, inače u desno. Ubacivanje se realizuje rekurzivnim pozivom, tako što se za vrednost podstabla postavlja vrednost stabla koje se dobija rekurzivnim pozivom funkcije ubaciCvor za odgovarajuće levo odnosno desno podstablo. Na ovaj način se rekurzija ponavlja dok se ne dođe do slučaja da se novi podatak ubacuje kao list na odgovarajuće mesto u binarnom stablu. 

Na sledećem listingu prikazana je funkcija koja ispisuje elemente binarnog stabla i to redom po veličini. Prvo se rekurzivno ispiše levo podstablo (u kom su elementni manji od korena), zatim se ispiše koren, a zatim rekurzivno desno podstablo (u kom su elementi veći od korena). 

```c
void ispisi(Cvor *koren) {
    if (koren!=NULL) {
        ispisi(koren->levi);
        printf("%d\n",koren->podatak);
        ispisi(koren->desni);
    }
}
```
