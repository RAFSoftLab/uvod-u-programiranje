#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
} Node;

Node* dodaj_na_pocetak(Node* list, Node* new){
    new->next = list;
    list = new;
    return list;
}

Node* obrisi_sa_pozicije(Node* list, int poz){
    if(list == NULL){
        return list;
    }

    Node* tmp = list;
    Node* del;
    int i;

    if(poz == 0){
        list = list->next;
        free(tmp);
        return list;
    }

    for(i=0;tmp->next!=NULL && i<poz-1;i++){
        tmp = tmp->next;
    }

    if(i == poz-1){
        del = tmp->next;
        tmp->next = del->next;
        free(del);
    }

    return list;
}

Node* obrisi_vrednost(Node* list, int vred){
    if(list == NULL){
        return list;
    }

    Node* del;
    Node* tmp;

    while(list != NULL && list->value == vred){
        del = list;
        list = list->next;
        free(del);
    }

    tmp = list;
    while(tmp != NULL && tmp->next != NULL){
        if(tmp->next->value == vred){
            del = tmp->next;
            tmp->next = del->next;
            free(del);
        }
        tmp = tmp->next;
    }

    return list;
}

void ispisi_listu(Node* tmp){
    while(tmp!=NULL){
        printf("%d ", tmp->value);
        tmp = tmp->next;
    }
}

void obrisi_listu(Node* list){
    Node* tmp = list;
    while(list != NULL){
        tmp = list;
        list = list->next;
        free(tmp);
    }
}

int main() {
    Node* list = NULL;
    Node* new;

    int x,a,b;

    scanf("%d",&x);

    while(x){
        new = malloc(sizeof(Node));
        new->value = x;
        list = dodaj_na_pocetak(list,new);
        scanf("%d",&x);
    }

    scanf("%d",&a);

    while(a){
        scanf("%d",&b);
        if(a == 1){
            list = obrisi_vrednost(list,b);
        }else if(a == 2){
            list = obrisi_sa_pozicije(list,b);
        }

        scanf("%d",&a);
    }

    ispisi_listu(list);

    obrisi_listu(list);

    return 0;
}
