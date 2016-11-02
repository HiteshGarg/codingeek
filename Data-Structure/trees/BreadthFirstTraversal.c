#include<stdio.h>
#include<stdlib.h>
 
typedef struct node{
    int key;
    struct node *left;
    struct node *right;
    }Node;
 
/* create a new node */
Node * newNode(int key){
 
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    temp->key = key;
    temp->left = NULL;
    temp->right = NULL;
 
    return temp; 
    }
 
/* print all key at given level */
void printLevelKey(Node *p, int level){
 
    if(!p)
        return ;
 
    else if(level == 1){
        printf("%d ", p->key);
        return ;
    }
    else{
        printLevelKey(p->left, level-1);
        printLevelKey(p->right, level-1);
        }
}
     
/* finding max level of a tree */
int getMaxLevel(Node *p){
 
    int l;
    int r;
     
    if(!p)
        return 0;
 
    l = getMaxLevel(p->left);
    r = getMaxLevel(p->right);
         
    return l>r?(l+1):(r+1);
}
     
/*breadth first traversing*/
void breadthFirstTraversing(Node *p){
 
    int maxLevel = getMaxLevel(p);
    int i;
 
    if(!p)
        return ;
 
    for (i = 1; i <= maxLevel; i++) {
        printLevelKey(p, i);
        
    }
}
int main(void) {
    Node *root;
    root = newNode(10);
    root -> left = newNode(20);
    root->right = newNode(30);
 
    root->left->left = newNode(40);
    root->left->right = newNode(50);
 
    root->right->left = newNode(60);
     
    printf("Breadth First Traversal: ");
    breadthFirstTraversing(root);
 
    return 0;
}
