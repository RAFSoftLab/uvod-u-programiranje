## Analiza
Ucitava se ceo brojevi N. Zatim se u for petlji (koja se vrti N puta) ucitava tacno jedan ceo broj. Tokom unosa, brojevi se smeštaju u binarno stablo pretrage korišćenjem funkcije insert. Prečnik se računa kao maskimalna vrednost zbira visina levog podstabla, desnog podstabla uvećanog za jedan (lh * lr + 1), odnosno, prečnika levog podstabla, prečnika desnog podstabla. 

Odnosno, prečnik se računa po sledećoj formuli:
d = max(ld, rd, lh + rh + 1)
gde je:
ld - prečnik levog podstabla
rd - prečnik desnog podstabla
lh - visina levog podstabla
rh - visina desnog podstabla