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

int depth(Node *root)
{
   if (root==NULL)
       return 0;
   else
   {
       /* compute the depth of each subtree */
       int lDepth = depth(root->left);
       int rDepth = depth(root->right);

       /* use the larger one */
       return max(lDepth, rDepth) + 1;
   }
}

int main(){
    Node *root = NULL;
    int n, a, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a);
        insert(&root, a);
    }

    printf("%d\n", depth(root));


    return 0;
}

