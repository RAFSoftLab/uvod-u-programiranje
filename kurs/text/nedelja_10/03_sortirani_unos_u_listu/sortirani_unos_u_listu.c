#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
} Node;

Node* dodaj_sortirano(Node* list, Node* new){
    if(list == NULL || new->value <= list->value){
        new->next = list;
        list = new;
        return list;
    }

    Node* tmp = list;
    while(tmp->next != NULL && tmp->next->value < new->value){
        tmp = tmp->next;
    }

    new->next = tmp->next;
    tmp->next = new;

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

    int x;

    scanf("%d",&x);

    while(x){
        new = malloc(sizeof(Node));
        new->value = x;
        list = dodaj_sortirano(list,new);
        scanf("%d",&x);
    }

    ispisi_listu(list);

    obrisi_listu(list);

    return 0;
}
