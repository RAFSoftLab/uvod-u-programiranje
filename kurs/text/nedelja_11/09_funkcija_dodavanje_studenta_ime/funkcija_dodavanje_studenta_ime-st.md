Pretpostavite da možete da koristite strukturu Student koja je definisana na sledeći način:

typedef struct Student
{
    char ime[50];
    char prezime[50];
    char indeks[50];
    int brojIndeksa;
    int godinaUpisa;
    double prosek;
    struct Student * sledeci;
} Student;

Potrebno je napisati funkciju Student* dodajStudenta(Student* head, Student* novi) koja će dodati novog studenta novi u uređenu jednostruko povezanu listu(po prezimenu, rastuće, ukoliko su im prezimena jednaka, upoređuju se po imenima) i vratiti pokazivač na početak liste. Takođe potrebno je napisati i funkciju Student* napraviStudenta(char ime[50],char prezime[50],char indeks[50],int brojIndeksa,int godinaUpisa,double prosek) koja kao parametre prima sve potrebne podatke o studentu, a vraća pokazivač na studenta.


## Napomena

Isključivo je potrebno implementirati *samo* funkcije dodajStudenta i napraviStudent, nije potrebno pisati dodatne strukture i main funkciju.
