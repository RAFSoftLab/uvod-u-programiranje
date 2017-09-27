## Analiza

Sa standardnog ulaza se učitavaju dve celobrojne vrednosti n i m (gornja i donja granica intervala). Pomoću funkcije ```rand()```, iz biblioteke *stdlib.h*, generišemo slučajan broj iz intervala [0,RAND_MAX]. Zatim uzimamo ostatak pri deljenju dobijenog slučajnog broja sa razlikom gornje i donje granice *m-n+1* i na nju dodamo donju granicu.

Ostatak pri deljenju nekim brojem X je bilo koji broj iz opsega [0,X-1]. To je razlog korišćenja ostatka pri deljenju dobijenog slučajnog broja pomoću funkcije ```rand()``` sa *m-n+1*. 
