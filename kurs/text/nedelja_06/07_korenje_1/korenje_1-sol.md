## Анализа

Pošto se i ovde radi o rekurzivnom problemu, moramo izdvojiti potprobleme.
Problem koji možemo da rešimo je označen plavom bojom, a problem čije nam je rešenje i dalje nepoznato je označen crvenom bojom. To je prakično isti problem, samo se počinje od broja manjeg za jedan. Potrebna nam je još i baza rekurzije, trivijalni problem.
Kada rekurzija stigne do izračunavanja korena broja 1, znamo da možemo da vratimo koren tog broja.

![alt text](media/nedelja_06/korenje1-sol.png)

Upotrebom iterativne funkcije, moramo prvo da krenemo od najdubljeg korena, da bismo onda mogli da dobijemo njegovo rešenje i nastavimo da rešavamo izraz ka 'spolja'.

## Смернице за алгоритам
