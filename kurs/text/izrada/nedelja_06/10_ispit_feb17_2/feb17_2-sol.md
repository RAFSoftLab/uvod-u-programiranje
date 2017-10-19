## Анализа

Problem koji se može svesti na problem: `Korenovanje - 2`
Jedina razlika je sto brojač je zamenjen za funkcijom brojača, a funkcija brojača je sledeća (recimo da je brojač **i**, a **n** jeste poslednji član do koga se računa funkcija):
- Ako je vrednost `i` neparna, funkcija bi trebalo da vrati i-ti član fibonačijevog niza podeljen sa stepenom dvojke (n - i + 1)
- Ako je vrednost `i` parna, funkcija bi trebalo da vrati samo i-ti član fibonačijevog niza

Bazni slučaj je ako je brojač stigao do kraja, tada bi trebalo da vrati koren date funkcije.

Što se tiče iterativnog dela, krećemo od najdubljeg korena, računamo koren vrednosti funkcije, i krećemo se spolja ka prvom članu, osvežavajući potkorenu vrednost.

## Смернице за алгоритам
