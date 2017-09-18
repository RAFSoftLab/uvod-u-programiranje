#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *left, *right;
}Node;

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
    int n, m, a, i;
    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++){
        scanf("%d", &a);
        insert(&root, a);
    }

    for(i = 0; i < m; i++){
        scanf("%d", &a);
        printf("%s\n", find(root, a) ? "True" : "False");
    }


    return 0;
}

