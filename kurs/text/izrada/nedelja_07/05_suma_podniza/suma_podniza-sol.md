## Analiza
**Resenje 1**
Sabiranjem uzastopnih elemenata dobijamo sumu nekog podniza. Ukoliko je suma do sada izračunatog podniza < 0, znamo da sve prethodne elemente možemo ignorisati, jer cak i da su svi naredni elementi pozitivni bolje je da uzmemo samo te pozitivne brojeve, bez prethodne negativne sume (u zadatku je zadato da će biti bar jedan pozitivni element). Uzimamo u obzir sve pozitivne podnizove, ukoliko je suma nekog podniza negativna, onda taj podniz mozemo zanemariti. Pamtimo najvecu sumu i uporedjujemo sa novom sumom, na kraju ispisujemo najvecu sumu.

**Resnje 2**
Proci kroz sve podnizove i za svaki podniz izracunati sumu elemenata. Pamćenjem najveće sume dolazimo do resenja.