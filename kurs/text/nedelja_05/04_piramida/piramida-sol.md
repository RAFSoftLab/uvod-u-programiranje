## Analiza

Dimenzije piramide se unose preko standardnog ulaza kao zadato N funkcijom `scanf`. Piramida zahteva da prvo bude razmaka `N - redni broj reda` u kom se zvezdice ispisuju, u svakoj iteraciji ćemo prvo ispisati razmake, a zatim zvezdice. Pošto je broj zvezdica na početku 1, a zatim se u svakom redu uvećava za 2, formula za broj zvezdica je `2 * redni broj reda - 1`.
