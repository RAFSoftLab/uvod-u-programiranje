## Analiza
Ucitava se ceo broj N.
Zatim se u for petlji (koja se vrti N puta) ucitava tacno jedan ceo broj. Tokom unosa, brojevi se smeštaju u binarno stablo pretrage korišćenjem funkcije insert. Tako kreirano binarno stablo čini uređenu strukturu čvorova, gde nam najlevlji čvor od korena sadrži minimalnu vrednost unetih brojeva. Krećući se ulevo od korena sve dok levi potomak od trenutno posećenog čvora nije jednak NULL pronalazimo traženi čvor. Prvi put kada naiđemo na čvor, čiji je levi potomak jednak NULL, prekidamo rekurziju i ispisujemo vrednost tog čvora.
