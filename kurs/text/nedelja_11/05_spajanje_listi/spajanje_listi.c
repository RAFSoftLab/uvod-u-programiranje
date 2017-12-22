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

Node* dodaj_sortirano(Node* lista, Node* novi){

    if(lista == NULL || lista->data >= novi->data){
        novi -> next = lista;
        return novi;
    }
    Node* root = lista;
    while(root->next != NULL && root->next->data < novi->data){
        root = root -> next;
    }
    novi -> next = root -> next;
    root -> next = novi;
    return lista;
}

Node* merge(Node* l1, Node* l2){
    Node* novaLista = NULL;

    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    if(l1->data < l2->data){
        novaLista = l1;
        l1 = l1 -> next;
    }else{
        novaLista = l2;
        l2 = l2 -> next;
    }

    Node* tmp = novaLista;
    while(l1 != NULL && l2 != NULL){
        if(l1->data > l2->data){
            tmp -> next = l2;
            tmp = tmp -> next;
            l2 = l2 -> next;
        }else{
            tmp -> next = l1;
            tmp = tmp -> next;
            l1 = l1 -> next;
        }

    }
    if(l1 != NULL) {
        tmp -> next = l1;
    }else if(l2 != NULL){
        tmp -> next = l2;
    }

    return novaLista;

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
    Node* korenListe1 = NULL;

    Node* korenListe2 = NULL;

    do{
        scanf("%d", &x);
        if(!x) continue;
        korenListe1 = dodaj_sortirano(korenListe1, newNode(x));
    }while(x);

    do{
        scanf("%d", &x);
        if(!x) continue;
        korenListe2 = dodaj_sortirano(korenListe2, newNode(x));
    }while(x);

    korenListe1 = merge(korenListe1, korenListe2);
    ispisiListu(korenListe1);
    korenListe1 = brisiListu(korenListe1);

    return 0;
}
