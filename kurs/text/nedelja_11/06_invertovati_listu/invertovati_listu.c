#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* newNode(int data){
    Node* novi = malloc(sizeof(Node));
    novi -> data = data;
    novi -> next = NULL;
    return novi;
}

void ispisiListu(Node* lista){
    while(lista != NULL){
        printf("%d ", lista->data);
        lista = lista -> next;
    }
    printf("\n");
}

Node* dodajNaKraj(Node* lista, Node* novi){
    Node* tmp = lista;
    if(tmp == NULL){
        return novi;
    }
    while(tmp -> next != NULL){
        tmp = tmp -> next;
    }
    tmp ->next = novi;
    return lista;
}

Node* invertuj(Node* lista){
    Node* head = lista;
    Node* last = NULL;
    Node* tmp = NULL;

    while(head != NULL){
        tmp = last;
        last = head;
        head = head -> next;
        last ->next = tmp;
    }

    return last;
}

Node* brisiListu(Node* lista){
    Node* last = NULL;
    Node* curr = lista;

    while(curr != NULL){
        last = curr;
        curr = curr -> next;
        free(last);
    }

    return NULL;
}

int main(){

    int x;
    Node* koren = NULL;

    do{
        scanf("%d", &x);
        if(!x) continue;
        koren = dodajNaKraj(koren, newNode(x));
    }while(x);

    koren = invertuj(koren);
    ispisiListu(koren);

    koren = brisiListu(koren);

    return 0;
}
