#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int key;
	struct node *left;
	struct node *right;
}Node;

/*for creating new node */	
Node * newNode(int key){
	
	Node *temp = (Node *)malloc(sizeof(Node));

	temp->key = key;
	temp->left = NULL;
	temp->right = NULL;
	
	return temp;
}

/*for inserting the key, newNode is the node needed to be inserted */	
Node * insert(Node *p, Node *nwNode){

	if(!p){
		printf("Key %d\tinserted\n", nwNode->key);
		return nwNode;
	}
	if(nwNode->key > p->key){

		insert(p->right, nwNode);
		if(!(p->right))
			p->right = nwNode;
	}
	else{
		insert(p->left, nwNode);
		if(!(p->left))
			p->left = nwNode;
	}
	return p;
}

/* for searching the key */
void search(Node *p, int searchKey){

	if(!p){
		printf("No key found for value - %d.\n", searchKey);
		return ;
	}	
	
	if(p->key == searchKey){
		printf("Key %d\tfound\n", searchKey);
	}
	
	else if(p->key < searchKey)
		search(p->right, searchKey);
	else
		search(p->left, searchKey);
	
}

/* inorder successor in BST will be the minimum key in right subtree */
Node * getInSuccessor(Node *p){

	while(p->left != NULL)
		p = p->left;  //this will give the minimum key

	return p;	
}
	
Node * deletion(Node *p, int delKey){

	struct node *temp;

	if(!p){
		printf("Unable to delete. No such key exists.\n");
		return p;
	}	

	else if(delKey > p->key)
		p->right = deletion(p->right, delKey);
	else if(delKey < p->key)
		p->left = deletion(p->left, delKey);
		
	/* executing else means get the key */
	else{
     /* node has one child or no child   */
		if(p->left == NULL){
			temp = p->right;
			free(p);
			return temp;
      }
      else if(p->right == NULL){
			temp = p->left;
			free(p);
			return temp;
      }
	
     /* node with two children, interchange with inorder successor */
	temp = getInSuccessor(p->right);
	p->key = temp->key;
	p->right = deletion(p->right, temp->key); // Delete the inorder successor
   }
   return p;
}

/* Preorder traversal that outputs key in non-decreasing order*/
void traversePreorder(Node *p){

	if(!p)
		return ;

	printf("%d ", p->key);
	traversePreorder(p->left);
	traversePreorder(p->right);
}

/* Inorder traversal that outputs key in non-decreasing order*/
void traverseInorder(Node *p){

	if(!p)
		return ;

	traverseInorder(p->left);
	printf("%d ", p->key);
	traverseInorder(p->right);
}

/* Postorder traversal that outputs key in non-decreasing order*/
void traversePostorder(Node *p){

	if(!p)
		return ;

	traversePostorder(p->left);
	traversePostorder(p->right);
	printf("%d ", p->key);
}
	
int main(void){

	Node *root = NULL; 

	root = insert(root, newNode(50));
	insert(root, newNode(80));
	insert(root, newNode(30));
	insert(root, newNode(40));
	insert(root, newNode(20));
	insert(root, newNode(100));

	search(root, 50);
	search(root, 10);
	
	Node *newRoot = deletion(root, 50);
	if(newRoot){
		printf("Successfully deleted node. Now tree root node is - %d.\n", newRoot->key);
	}
	search(root, 50);

	printf("Preorder Traversal: ");
	traversePreorder(root);	
	printf("\nInorder Traversal: ");
	traverseInorder(root);	
	printf("\nPostorder Traversal: ");
	traversePostorder(root);	
	
	return 0;
}
