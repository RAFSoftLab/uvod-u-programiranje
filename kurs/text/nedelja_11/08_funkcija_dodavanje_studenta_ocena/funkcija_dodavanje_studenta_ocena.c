
int uporediStudente(Student* s1, Student* s2) {
  if (s1->prosek<s2->prosek) return  -1;
  if (s1->prosek>s2->prosek) return  1;
  return 0;
}

Student *dodajStudenta(Student *head,Student *novi)
{
    if(head == NULL) return novi;
    if (uporediStudente(head,novi)>0) {
      novi->sledeci = head;
      return novi;
    }
    Student *tmp = head;
    while(tmp->sledeci != NULL && (uporediStudente(tmp->sledeci,novi)<=0) )
    {
        tmp=tmp->sledeci;
    }
    novi->sledeci = tmp->sledeci;
    tmp->sledeci = novi;
    return head;
}

Student *napraviStudenta(char ime[50],char prezime[50],char indeks[50],int brojIndeksa,int godinaUpisa,double prosek)
{
    Student *novi = (Student *)malloc(sizeof(Student));
    strcpy(novi->ime,ime);
    strcpy(novi->prezime,prezime);
    strcpy(novi->indeks,indeks);
    novi->brojIndeksa = brojIndeksa;
    novi->godinaUpisa = godinaUpisa;
    novi->prosek = prosek;
    novi->sledeci = NULL;
    return novi;
}
