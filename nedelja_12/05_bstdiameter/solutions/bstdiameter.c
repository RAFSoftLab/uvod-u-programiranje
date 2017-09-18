#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *left, *right;
}Node;

int max(int a, int b){
    return a < b ? b : a;
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

int diameterOpt(Node *root, int* height){
    int lh = 0, rh = 0;

    int ldiameter = 0, rdiameter = 0;

    if(root == NULL)
    {
        *height = 0;
        return 0;
    }

    ldiameter = diameterOpt(root->left, &lh);
    rdiameter = diameterOpt(root->right, &rh);

    *height = max(lh, rh) + 1;

    return max(lh + rh + 1, max(ldiameter, rdiameter));
}

int main(){
    Node *root = NULL;
    int n, a, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a);
        insert(&root, a);
    }

    printf("%d\n", diameterOpt(root, &a));


    return 0;
}

