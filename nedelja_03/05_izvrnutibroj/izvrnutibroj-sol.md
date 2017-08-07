## Analiza

Ucitava se prirodan broj N. Potrebno je dodeliti promenljivoj broj vrednost 0 (zato sto je 0 neutral za operaciju sabiranja-ne utice na krajnu vrednost). Do-while petlja se koristi zato sto je sigurno da ce N imati makar jednu cifru. U ovoj petlji koja se vrti sve dok je N vece od 0, izracunavamo poslednju cifru broja N, i nju dodajemo na trenutnu vrednost promenljive broj, s tim sto cemo pre toga promenljivu broj pomnoziti sa 10, takodje cemo N podeliti sa 10, time oznacavamo da smo "prebacili poslednju cifru" broja N. Po zavrsetku petlje, potrebno je ispisati promenljuvu broj, koja predstavlja broj koji ima obrnute cifre u odnosu na broj N.

#### Simulacija

n=123; broj=0;

1.iteracija

* broj = 0 * 10 + (123 % 10) = 0 + 3 = 3
* n=123/10=12

2.iteracija

* broj = 3 * 10 + (12 % 10) = 30 + 2 = 32
* n= 12 / 10 = 1

3.iteracija

* broj = 32 * 10 + (1%10) = 320 + 1 = 321
* n = 1 / 10 = 0
