## Анализа

Kao i kod prošlog problema sa korenovanjem, pokušavamo da razdvojimo potprobleme.
Rešavanje problema za zadato **n** možemo posmatrati kao koren broja **n** + (prikazano plavim) potproblem veličine **n-1** (prikazano crvenim).
Takodje, moramo pratiti da li smo stigli do broja **n**, tako da nam je potreban i jedan brojač, koji će služiti da prekine rekurziju kada dodje vreme za to.
Bazni slučaj je ako smo stigli do broja **n**, znači da smo stigli najdublje što smo mogli, i tada ćemo za rezultat vratiti koren broja **n**.

![alt text](media/nedelja_06/korenje2-sol.png)

Iterativan način je da prvo krenemo iz najdubljeg dela korena, i da se krećemo ka spolja.
Prvo ćemo kao korenu vrednost imati samo koren broja **n**, a onda ćemo sabirati sa korenom zbira jednog manje broja i prošle potkorene vrednosti. Kada stignemo do broja 1, znamo da je to poslednja iteracija i to je poslednje izračunavanje potkorene vrednosti.

## Смернице за алгоритам
