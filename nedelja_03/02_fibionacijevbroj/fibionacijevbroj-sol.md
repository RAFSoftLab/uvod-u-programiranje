## Analiza
Učitava se ceo broj N. Prvi broj fibionačijevog niza jednak je 1, kao i drugi. U for petlji koja ide od i=3(jer su vec prva dva broja fibionačijevog niza pronađena) do i=n, promenljiva sledeći dobija vrednost zbira prvog i drugog broja. Potrebno je prvo drugi broj postane prvi, a prethodno dobijen zbir prvog i drugog broja postane drugi broj, na taj način ćemo obezbediti da prilikom novog ulaza u ciklus vrednosti prvog i drugog broja budu korektne.
Po završetku for petlje, potrebno je ispisati samo drugi broj jer on predstavlja vrednost N-tog fibionačijevog broja.(Ukoliko je na standardnom ulazu uneto 1 ili 2, telo for petlje se ne bi izvršilo, a vrednost drugog broja ostala bi jednaka jedinici)

##### Simulacija programa

unos: n=5

prvi=1 drugi=1

i=3
* sledeci=1+1=2
* prvi=1
* drugi=2

i=4
* sledeci=1+2=3
* prvi=2
* drugi=3

i=5
* sledeci=2+3=5
* prvi=3
* drugi=5

ispis: 5
