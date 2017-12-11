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

void nadovezi(Node** list1, Node* list2){
    if(list2 == NULL){
        return;
    }

    Node* l1 = NULL;
    Node* tmp;
    Node* l2 = list2;

    tmp = l2;
    while(tmp != NULL){
        l2 = l2->next;
        l1 = dodaj_na_pocetak(l1,tmp);
        tmp = l2;
    }

    if(*list1 == NULL){
        *list1 = l1;
        return;
    }

    tmp = *list1;

    while(tmp->next != NULL){
        tmp = tmp->next;
    }

    tmp->next = l1;
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
    Node* list1 = NULL;
    Node* list2 = NULL;
    Node* new;

    int x;

    scanf("%d",&x);
    while(x){
        new = malloc(sizeof(Node));
        new->value = x;
        list1 = dodaj_na_pocetak(list1,new);
        scanf("%d",&x);
    }

    scanf("%d",&x);
    while(x){
        new = malloc(sizeof(Node));
        new->value = x;
        list2 = dodaj_na_pocetak(list2,new);
        scanf("%d",&x);
    }

    nadovezi(&list1,list2);

    ispisi_listu(list1);

    obrisi_listu(list1);
    return 0;
}
