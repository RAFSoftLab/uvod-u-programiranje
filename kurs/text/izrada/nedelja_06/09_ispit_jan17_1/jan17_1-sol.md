## Анализа

Ovaj problem možemo da svedemo na problem: `Razlomci - 2`.
Jedina razlika je sto brojač je zamenjen za funkcijom brojača, a funkcija brojača je `zbir svih prirodnih brojeva pre brojača, povećan za jedan`.
Lako se da zaključiti da je vrednost iznad razlomačke crte = `2 * n - brojač + 1`, te samim tim imamo sve delove potrebne za rešavanje ovog problema.
Takodje mozemo da podelimo na potprobleme i rekurzivno uradimo, a što se tiče iterativnog dela, moramo da podjemo od najdubljeg ralomačkog dela i da se krećemo ka gore osvežavajući u svakom koraku vrednost razlomka.

## Смернице за алгоритам
