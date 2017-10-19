## Анализа

Potprobleme mozemo sagledatai na sledeci nacin:
- Stampamo jedan red zvezdica i ostalih n-1 redova zvedica

Kako u svakom redu ispisujemo po m kolona, tako cemo u for petlji ispisati m zvezdica i napraviti novi red.
Zatim cemo pozvati rekurzivno funkciju, a kao argument prosledjujemo jedan red manje, a isto toliko kolona.
Bazni slucaj bi bio kada je ostalo 0 redova, u tom slucaju se vracamo iz funkcije.

## Смернице за алгоритам
