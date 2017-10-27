## Анализа
Ovaj problem rešavamo tako što napravimo novi niz (gde je *N* dužina niza) i vršimo kopiranje u novi niz na sledeci način: Uzećemo *stariNiz[K]* i taj element postaviti na *noviNiz[0]* (*K* je broj levih rotacija). Prvo vrsimo kopiranje [*K*, *N-1*] elementa, pa na kraju napelpimo elemente od [*0*, *K-1*] indeksa.
