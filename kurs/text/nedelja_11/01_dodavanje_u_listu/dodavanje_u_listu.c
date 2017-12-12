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

Node* dodaj_na_kraj(Node* list, Node* new){
    if(list == NULL){
        return dodaj_na_pocetak(list,new);
    }

    Node *tmp = list;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }

    tmp->next = new;
    new->next = NULL;

    return list;
}

Node* dodaj_na_poziciju(Node* list, Node* new, int i){
    if(list == NULL || i == 0){
        return dodaj_na_pocetak(list,new);
    }

    int j;
    Node* tmp = list;
    for(j=0;tmp->next!=NULL && j<i-1;j++){
        tmp = tmp->next;
    }

    if(i-1 == j){
        new->next = tmp->next;
        tmp->next = new;
        return list;
    }else{
        return dodaj_na_kraj(list,new);
    }
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

    int a,b,x;

    scanf("%d",&a);

    while(a){
        scanf("%d",&b);
        new = malloc(sizeof(Node));
        new->value = b;

        if(a == 1){
            list = dodaj_na_kraj(list,new);
        }else if(a == 2){
            list = dodaj_na_pocetak(list,new);
        }else if(a == 3){
            scanf("%d",&x);
            list = dodaj_na_poziciju(list,new,x);
        }

        scanf("%d",&a);
    }

    ispisi_listu(list);

    obrisi_listu(list);

    return 0;
}
