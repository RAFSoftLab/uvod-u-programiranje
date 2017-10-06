---
title: Rekurzija
author: RAF
---

## Pojam rekurzije

Pojam rekurzije potiče iz matematike i ima veliku primenu u programiranju. U matematičkom smislu rekurzija predstavlja definisanje problema uz pomoć samog tog problema. U matematici postoji veliki broj primera rekurzija, a najpoznatiji su Fibonačijevi brojevi koji se definišu na sledeći način:

F(n) = F(n-1)+F(n-2). 

Ovaj izraz znači da se n-ti fibonačijev broj izračunava kao zbir n-1-og i n-2-gog fibonačijevog broja, koji se opet izračunavaju na isti način kao n-ti broj.

Drugi način definisanja rekurzije kaže da rekurzija predstavlja način definisanja problema preko pojednostavljene verzije istog tog problema. Jedan primer kojim se ovo može opisati je rešavanje problema pronalaska puta do kuće (problem ćemo označiti izrazom “pronađi put do kuće”). Rekurzijom bi se ovaj problem mogao opsati u tri koraka, na sledeći način:

1.	ako si kod kuće, ostani u mestu
2.	inače, napravi jedan korak prema kući
3.	pronađi put do kuće

Tačka pod brojem 3 u ovom opisu problema predstavlja poziv istog problema iz definicije, ali posle učinjene jedne jednostavne akcije, a to je jedan korak prema kući, problem je pojednostavljen. 

Opisani postupak se može uopštiti, čime dobijamo generalni algoritam koji rešava probleme rekurzijom, i on se sastoji od sledeća tri koraka:

1.	trivajlni slučaj (kojim se prekida proces)
2.	izvršavanje jedne akcije koja nas vodi ka trivijalnom slučaju
3.	rekurzivni poziv

Ovako opisani postupak rešavanja problema ima algoritamski oblik i za većinu problema se može implementirati. 

Kako bismo opisali algoritam za izračunavanje faktorijela nekog broja rekurzijom (faktorijel je n! = n*(n-1)*..*1, i važi 0! = 1).

Odgovor:
1.	trivijalni slučaj je n=0, i u ovom slučaju izlazimo iz rekurzije
2.	trenutni rezultat pomnožimo sa n i smanjimo n za 1 (ovim smo se približili trivijalnom slučaju)
3.	rekurzivni poziv za novo n. 


## Implementacija rekurzije

Rekurzija se implementira preko funkcija i predstavlja pojavu u kojoj funkcija poziva samu sebe. Korišćenjem rekurzije moguće je simulirati rad petlje, odnosno ponavljanja bloka naredbi. Rekurzija se često koristi u rešavanju raznih matematičkih problema, kao što su izračunavanje faktorijela nekog broja, fibonačijevih brojeva i sl, ali se često koristi i u programerskim zadacima kao što su sortiranje nizova, pretraživanje složenih struktura podataka i rešavanje složenih programerskih problema (na primer raspored kraljica na šahovkoj tabli).




## Uzajamna rekurzija



## Interesantni primeri primene rekurzije




