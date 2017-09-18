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

Node *max_node(Node *root){
    while(root->right != NULL)
        root = root->right;
    return root;
}

void findPreSuc(Node* root, Node** pre, Node** suc, int key) {
    if (root == NULL)
        return;
    if (root->data == key) {
        if (root->left != NULL)
            *pre = max_node(root->left);
        if (root->right != NULL)
            *suc = min_node(root->right);
    } else if (root->data < key){
        *pre = root;
        findPreSuc(root->right, pre, suc, key);
    }
    else{
        *suc = root;
        findPreSuc(root->left, pre, suc, key);
    }
}

int main(){
    Node *root = NULL, *pre = NULL, *suc = NULL;
    int n, m, a, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a);
        insert(&root, a);
    }

    scanf("%d", &m);

    findPreSuc(root, &pre, &suc, m);
    printf("%d %d\n", pre->data, suc->data);

    return 0;
}

