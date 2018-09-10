Pretpostavite da možete da koristite strukturu Emisija koja je definisana na sledeći način:

typedef struct Emisija
{
    char ime[50];
    int satiPocetno;
    int minutiPocetno;
    int satiZavrseno;
    int minutiZavrseno;
    double prosek;
    struct Emisija * sledeci;
} Emisija;

Potrebno je napisati funkciju dodajEmisiju(Emisija* head, Emisija* novi)  koja će dodati novu emisiju novi u uređenu jednostruko povezanu listu(po vremenu početka) i vratiti pokazivač na početak liste. Takođe potrebno je napisati i funkciju Emisija* napraviEmisiju(char ime[50], int satiPocetno, int minutiPocetno, int satiZavrseno, int minutiZavrseno) koja kao parametre prima sve potrebne podatke o emisiji, a vraća pokazivač na emisiju. Još, napisati funkciju int brojEmisijaUTerminu(Emisija* head, int sati, int minuti)
 koja će vratiti broj emisija koje se emituju u trenutku sati:minuti (sati i minuti se šalju kao parametri funkcije).


## Napomena

Isključivo je potrebno implementirati *samo* funkcije dodajEmisiju, napraviEmisiju i  brojEmisijaUTerminu, nije potrebno pisati dodatne strukture i main funkciju. Smatra se da ukoliko se emisije ne preklapaju ukoliko se jedna emisija završava u jednom trenutku a druga počinje u istom trenutku.
