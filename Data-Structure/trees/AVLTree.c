#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int key;
    struct node *left;
    struct node *right;
    int height;
}Node;
 
/*for creating new node */ 
Node * newNode(int key){
     
    Node *temp = (Node *)malloc(sizeof(Node));
 
    temp->key = key;
    temp->left = NULL;
    temp->right = NULL;
    temp->height = 0; 
    return temp;
}

/*deciding max of i and j */
int max(int i, int j){
	return i>j?i:j;	
	}


int height(Node *p){
	return p==NULL?-1:(p->height);
	}	
 
Node *leftLeftRotn(Node *p){
	Node *q = (Node *)malloc(sizeof(Node));
	q = p->left;
	p->left = q->right;
	q->right = p;
	
	p->height = max(height(p->left), height(p->right)) + 1;
	q->height = max(height(q->left), p->height) + 1;
	
	return q;
	}
	
Node *rightRightRotn(Node *p){
	Node *q = (Node *)malloc(sizeof(Node));
	q = p->right;
	p->right = q->left;
	q->left = p;
	p->height = max(height(p->left), height(p->right)) + 1;
	q->height = max(height(q->right), p->height) + 1;
	
	return q;
	
	}
	
/*double rotation is performed as LR */	
Node *leftRightRotn(Node *p){
	p->left = rightRightRotn(p->left);
	p = leftLeftRotn(p);
	
	return p;	
	}

/*double rotation is performed as RL */	
Node *rightLeftRotn(Node *p){
	p->right = leftLeftRotn(p->right);
	p = rightRightRotn(p);
	return p;
	}			


 
Node *balance(Node *p){
	int bFactor, hL, hR;  /* hL & hR: height of left subtree and right subtree*/
	Node *pLeft, *pRight; /*pLeft & pRight: left and right subtree of root p */
	
	if(!p->left)
		hL = 0;
	else
		hL = p->left->height + 1;
		
	if(!p->right)
		  hR = 0;
	else
		  hR = p->right->height + 1;

			
	bFactor = hL - hR;
	
	if(bFactor  < 2 && bFactor > -2)
		return p;
		
  else if(bFactor == 2){
		pLeft = p->left;
		
	  if( height(pLeft->left) > height(pLeft->right) )
			return leftLeftRotn(p);
		else
			return leftRightRotn(p);
		
		}
	 else{
			pRight = p->right;
		
	  if( height(pRight->right) > height(pRight->left) )
			return rightRightRotn(p);
		else
			return rightLeftRotn(p);	
	}
}
 
/*for inserting the key, newNode is the node needed to be inserted */  
Node * insert(Node *p, Node *nwNode){
 
    if(!p){
        printf("Key %d\tinserted\n", nwNode->key);
        return nwNode;
    }
    if(nwNode->key > p->key){
 
        p->right = insert(p->right, nwNode);
        if(!(p->right))
            p->right = nwNode;
    }
    else{
        p->left = insert(p->left, nwNode);
        if(!(p->left))
            p->left = nwNode;
    }
    p->height = max(height(p->left), height(p->right)) + 1;
    
    p = balance(p); //balance checking and performing
    
    return p;
}
 
 
int main(void){
 
    Node *root = NULL; 
 
    root = insert(root, newNode(50));
	  root = insert(root, newNode(40));
    root = insert(root, newNode(45)); //LR rotatn required
    printf("%d\n", root->key); // after rotatn. root should be 45
    
    root = insert(root, newNode(30));
    root = insert(root, newNode(20)); //LL rotatn required
    printf("%d\n", root->left->right->key); // right of left child of root should be 40
    
    root = insert(root, newNode(60));
    root = insert(root, newNode(80)); //RR rotatn required
    printf("%d\n", root->right->left->key); // left of right child of root should be 50

	  root = insert(root, newNode(70));
    root = insert(root, newNode(90));
    root = insert(root, newNode(65)); //RL rotatn required
    printf("%d\n", root->right->key); //right child of root should be 70
	
    return 0;
} 
