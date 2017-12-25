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

Node *min_node(Node *root){
    while(root->left != NULL)
        root = root->left;
    return root;
}

int main(){
    Node *root = NULL;
    int n, a, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a);
        insert(&root, a);
    }

    printf("%d\n", min_node(root)->data);
    return 0;
}

