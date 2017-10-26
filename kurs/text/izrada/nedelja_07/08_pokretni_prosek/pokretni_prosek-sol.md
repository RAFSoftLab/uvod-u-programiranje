## Анализа
Prateći formulu koja je data u zadatku:
*B[i]* = *A[i]*, ako je *i + 1* < *K*
*B[i]* = (*A[i]* + *A[i+1]* + ... + *A[i - K + 1]*) / *K*
Možemo tvrditi da se svi elementi kojima je indeks manji od *K - 1* prepisujemo u novi niz *B*. Ukoliko je indeks elementa >= od *K - 1* onda sumiramo prethodnih *K* elemenata (računajuci i trenutni element niza *A*)
