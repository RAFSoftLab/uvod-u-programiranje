
Student *dodajStudenta(Student *head,Student *novi)
{
    if(head == NULL) return novi;
    Student *tmp = head;
    while(tmp->sledeci != NULL)
    {
        tmp=tmp->sledeci;
    }
    tmp->sledeci = novi;
    return head;
}

Student *napraviStudenta(char ime[50],char prezime[50],char indeks[50],int brojIndeksa,int godinaUpisa,int prviTest,int drugiTest,int prviKolokvijum,int drugiKolokvijum,int ispit)
{
    Student *novi = (Student *)malloc(sizeof(Student));
    strcpy(novi->ime,ime);
    strcpy(novi->prezime,prezime);
    strcpy(novi->indeks,indeks);
    novi->brojIndeksa = brojIndeksa;
    novi->godinaUpisa = godinaUpisa;
    novi->prviTest = prviTest;
    novi->drugiTest = drugiTest;
    novi->prviKolokvijum = prviKolokvijum;
    novi->drugiKolokvijum = drugiKolokvijum;
    novi->ispit = ispit;
    novi->sledeci = NULL;
    return novi;
}
