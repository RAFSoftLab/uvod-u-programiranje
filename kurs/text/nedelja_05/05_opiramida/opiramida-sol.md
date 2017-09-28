## Analiza

Dimenzije obrnute piramide se unose preko standardnog ulaza kao zadato N funkcijom `scanf`. Obrnuta piramida zahteva da prvo bude razmaka za jedan broj manje nego redni broj reda, u svakoj iteraciji ćemo prvo ispisati razmake, a zatim zvezdice. Broj zvezdica u prvom redu je maksimalan i on iznosi `2 * n - 1`, a u svakom redu opada za po dva, samim tim je formula za broj zvezdica `2 * (n - i + 1) - 1`.
