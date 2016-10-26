#include<stdio.h>
#include<stdlib.h>
 
typedef struct node{
    int key;
    struct node *left;
    struct node *right;
    }Node;
 
void printPreorder(Node *); /* print preorder sequenece*/
void printInorder(Node *);  /* print inorder sequenece*/
void printPostorder(Node *);/* print postorder sequenece*/
 
/* create a new node */
Node * newNode(int key){
 
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    temp->key = key;
    temp->left = NULL;
    temp->right = NULL;
 
    return temp; 
    }
     
void printPreorder(Node *p){
 
    if(!p)
        return ;
 
    printf("%d ", p->key);
    printPreorder(p->left);
    printPreorder(p->right);
}
 
void printInorder(Node *p){
 
    if(!p)
        return ;
 
    printInorder(p->left);
    printf("%d ", p->key);
    printInorder(p->right);
}
 
void printPostorder(Node *p){
 
    if(!p)
        return ;
 
    printPostorder(p->left);
    printPostorder(p->right);
    printf("%d ", p->key);
}
 
  
int main(void){
 
    Node *root;
 
    root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
 
    root->left->left = newNode(40);
    root->left->right = newNode(50);
 
    root->right->left = newNode(60);
     
    printf("Preorder: ");
    printPreorder(root);
     
    printf("\nInorder: ");
    printInorder(root);
     
    printf("\nPostorder: ");
    printPostorder(root);
 
    return 0;
}
