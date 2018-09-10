int uporediEmisije(Emisija *e1, Emisija *e2)
{
    if (e1->satiPocetno<e2->satiPocetno) return -1;
    if (e1->satiPocetno>e2->satiPocetno) return 1;
    if (e1->minutiPocetno<e2->minutiPocetno) return -1;
    if (e1->minutiPocetno>e2->minutiPocetno) return 1;
    return 0;
}

Student *dodajEmisiju(Emisija *head,Emisija *novi)
{
    if(head == NULL) return novi;
    if (uporediEmisije(head,novi)>0) {
      novi->sledeci = head;
      return novi;
    }
    Student *tmp = head;
    while(tmp->sledeci != NULL && (uporediEmisije(tmp->sledeci,novi)<=0) )
    {
        tmp=tmp->sledeci;
    }
    novi->sledeci = tmp->sledeci;
    tmp->sledeci = novi;
    return head;
}


Emisija* napraviEmisiju(char ime[50], int satiPocetno, int minutiPocetno, int satiZavrseno, int minutiZavrseno)
{
    Emisija *novi = (Emisija *)malloc(sizeof(Emisija));
    strcpy(novi->ime,ime);
    novi->satiPocetno = satiPocetno;
    novi->minutiPocetno = minutiPocetno;
    novi->satiZavrseno = satiZavrseno;
    novi->minutiZavrseno = minutiZavrseno;
    novi->sledeci = NULL;
    return novi;
}

int unutra(Emisija* e, int sati, int minuti)
{
    if (e->satiPocetno<sati && e->satiZavrseno>sati) return 1;
    if (e->satiPocetno==sati && e->satiZavrseno>sati && e->minutiPocetno<minuti) return 1;
    if (e->satiPocetno==sati && e->satiZavrseno==sati && e->minutiPocetno<minuti && e->minutiZavrseno>minuti) return 1;
    return 0;
}

int brojEmisijaUTerminu(Emisija* head, int sati, int minuti)
{
    int resenje = 0;
    while (head!=NULL)
    {
        if (unutra(head,sati,minuti)) resenje++;
        head = head->sledeci;
    }
}
