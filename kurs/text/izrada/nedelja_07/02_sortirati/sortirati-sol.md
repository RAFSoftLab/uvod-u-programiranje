## Анализа
Sortiranje niza možemo uraditi tako sto za element *A[i]* uzimamo minimalni element od *A[i], A[i+1], ... , A[n-1]* (indeksiranje od nule). Pritom ne uzimamo u obzir elemente koje na odgovarajućem mestu. Ukoliko je za *i = 0* pronadjen odgovarajuci element, za element sa indeksom *i = 1* uzimamo u obzir sve elemente ciji je indeks *>= i*
## Смернице за алгоритам
 Krenuti od prvog elementa (*A[i]*,  0 <= *i* < *N*) i taj element zameniti elementom *A[j]* ukoliko je *A[j]* < *A[i]* (*A[j]*, *i* <= *j* < *N*).