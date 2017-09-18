## Naredbe ponavljanja (petlje)

Ukoliko rešavamo problem u programiranju koji zahteva da se neki blok naredbi izvrši više puta potrebne su nam naredbe ponavljanja ili petlje. Primeri ovakvih problema su programi koji računaju zbir prvih n prirodnih brojeva, izračunavaju n! (n! = n\*(n-1)\*(n-2)\*...\*1). Ovakvi programi se često nazivaju programi sa cikličnom strukturom.  

U C-u postoje tri naredbe kojima se mogu implementirati programi sa cikličnom strukturom. To su:

* for
* while
* do..while. 

Svaka od ovih naredbi omogućava nam da implementirao ponavljanje bloka naredbi. Jedno izvršavanje bloka naredbi u okviru petlje naziva se iteracija. 


## Naredba for

Sintaksa for naredbe je 

```{r, eval = FALSE}
for(inicijalizacija; uslov; inkrementacija){
	blok naredbi
}
```

Dijagram toka koji ilustruje način izvršavanja for naredbe. 




Prvo se izvrši inicijalizacija, i zatim se proverava uslov. Ukoliko je njegova vrednost tačna (odnosno u C-u veća od 0), ulazi se u blok naredni koji je naveden u petlji. Kada se izvrše sve naredbe izvršava se inkrementacija i tok programa se vraća na ponovno ispitivanje uslova. Opisani proces se ponavlja sve dok je ispunjen uslov. Ako uslov nije ispunjen izlazi se iz petlje i nastavlja se sa izvršavanjem naredbi koje su navedene posle for petlje. Deo za inkrementaciju najčešće menja vrednost promenljive koja se pojavljuje u uslovu.   


