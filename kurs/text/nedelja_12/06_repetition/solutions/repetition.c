#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    int qty;
    struct Node *left, *right;
}Node;

void insert(Node **root, int data){
    if(*root == NULL){
        Node *node = (Node*) malloc(sizeof(Node));
        node->data = data;
        node->left = NULL;
        node->right = NULL;
        node->qty = 1;
        *root = node;
        return;
    }

    if(data == (*root)->data)
        (*root)->qty += 1;
    else if(data > (*root)->data)
        insert(&((*root)->right), data);
    else
        insert(&((*root)->left), data);
}

void print(Node *root){
    if(root == NULL)
        return;
    print(root->left);
    printf("%d %d\n", root->data, root->qty);
    print(root->right);
}

int main(){
    Node *root = NULL;
    int n, a, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a);
        insert(&root, a);
    }
    print(root);


    return 0;
}

