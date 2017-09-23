## Analiza
Unose se dva cela broja N i CF. Broj koji se ispisuje na kraju jeste n1, i mora se inicijalizovati (n1=0). Promenljiva osnova predstavlja trenutnu vrednost težine U while ciklusu koji će se vrtiti onoliko puta koliko broj N ima cifara, isputuje se svaka cifra C broja N (od cifre sa najmanjom težinom do cifre sa najvecom težinom). Ukoliko je ta cifra C različita od unetog broja CF tada se broju n1 dodaje  c*osnova (osnova predstavlja težinu pozicije na kojoj se cifra c nalazila u broju n-stepen broja 10). Na standardnom izlazu potrebno je ispisati novodobijeni broj n1.

#### Simulacija

n=44567 cf=4

1.iteracija

* c=7
* 7!=4  -> n1=0+7*1=7 ; osnova=10
* n=4456

2.iteracija

* c=6
* 6!=4  -> n1=7+6*10=67 ; osnova=100
* n=445

3.iteracija

* c=5
* 5!=4  -> n1=67+5*100=567 ; osnova=1000
* n=44

4.iteracija

* c=4
* 4=4
* n=4

5.iteracija

* c=4
* 4=4
* n=0


n1=567
