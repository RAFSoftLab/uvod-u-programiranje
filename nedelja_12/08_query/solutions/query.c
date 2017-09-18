#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *left, *right;
}Node;

int max(int a, int b){
    return a < b ? b : a;
}

Node *min_node(Node *root){
    while(root->left != NULL)
        root = root->left;
    return root;
}

Node *max_node(Node *root){
    while(root->right != NULL)
        root = root->right;
    return root;
}

void insert(Node **root, int data){


    if(*root == NULL){
        Node *node = (Node*) malloc(sizeof(Node));
        node->data = data;
        node->left = NULL;
        node->right = NULL;
        *root = node;
        return;
    }

    if(data > (*root)->data)
        insert(&((*root)->right), data);
    else
        insert(&((*root)->left), data);
}

void remove(Node **root, int key){
    if(!(*root)) return;

    if(key < (*root)->data)
        remove(&(*root)->left, key);
    else if(key > (*root)->data)
        remove(&(*root)->right, key);
    else{
        if((*root)->left != NULL){
            (*root)->data = max_node((*root)->left)->data;
            remove(&(*root)->left, (*root)->data);
        }else if((*root)->right != NULL) {
            (*root)->data = min_node((*root)->right)->data;
            remove(&(*root)->right, (*root)->data);
        }else{
            free(*root);
            *root = NULL;
        }
    }
}

int find(Node *root, int data){
    if(root == NULL)
        return 0;
    if(root->data == data)
        return 1;
    if(root->data > data)
        return find(root->left, data);
    else
        return find(root->right, data);
}



int main(){
    Node *root = NULL;
    int n, a, b, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        switch(a){
            case 1: insert(&root, b); break;
            case 2: remove(&root, b); break;
            case 3: printf("%s\n", find(root, b) ? "Yes" : "No"); break;
        }
    }
    return 0;
}

