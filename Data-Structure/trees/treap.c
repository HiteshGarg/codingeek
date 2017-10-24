#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Treap{
	int priority;
	int key;
	struct Treap *left;
	struct Treap *right;
	}treap;

treap *create_treap_node(int key, int priority){

	treap *tp = (treap *)malloc(sizeof(treap));
	tp->key = key; tp->priority = priority;
	tp->left = tp->right = NULL;
	return tp;
}

treap * left_rotatn(treap *t){
	
	treap *right = t->right;
	
	t->right = right->left;
	right->left = t;
	
	return right;
}

treap * right_rotatn(treap *t){
	
	treap *left = t->left;
	
	t->left = left->right;
	left->right = t;
	
	return left;
}

treap *search_and_insert(treap *tp, treap *new_node){
	
	if(!tp)
		return tp;
	
	if(tp->key > new_node->key){
		tp->left = search_and_insert(tp->left, new_node);
		if(!(tp->left)){
			tp->left = new_node;
		}
		if(tp->priority < tp->left->priority)
			tp = right_rotatn(tp);
	}
	else{
		tp->right = search_and_insert(tp->right, new_node);
		if(!(tp->right)){
			tp->right = new_node;
		}
		if(tp->priority < tp->right->priority)
			tp = left_rotatn(tp);
	}
	return tp;
}

/* builds treap following max heap property and BST*/
treap * insert(treap *tp, treap *new_node){
	
	/* treap contains no node*/
	if(!tp)
		return new_node;
	/*if there is only one node in the treap i.e. both right and left child null*/	
	else if(!(tp->right) && !(tp->left)){
		if(new_node->priority > tp->priority){
			if(new_node->key > tp->key)
				new_node->left = tp;
			else
				new_node->right = tp;
		}
		else{
			if(tp->key > new_node->key)
				tp->left = new_node;
			else
				tp->right = new_node;
		}
	}
	/* treap contains more than one node and first search operation and then, accordingly 
	 * rotatation will be applied, if required*/
	else
		tp = search_and_insert(tp, new_node);
		
	return tp;		
}

/* deleting the key implies, set the priority as INT_MIN as following maxHeap*/
treap *delete(treap *t, int key){
	
	/* key not found*/
	if(!t){
		printf("\nInvalid! No such key\n");
		return t;
	}
	/* key found, if it's leaf delete it else make it as leaf'*/
	if(t->key == key){
		t->priority = INT_MIN;
		/*key node is a leaf*/
		if( !t->left && !t->right){
			printf("\nKey %d deleted\n", t->key);
			free(t);
			return NULL;
		}
		/*key node has only right child*/
		else if(!t->left){ t = left_rotatn(t); t->left = delete(t->left, key);}
		/*key node has only left child*/
		else if(!t->right){ t = right_rotatn(t); t->right = delete(t->right, key);}
		/*key node has both children*/
		else
			if(t->left->priority > t->right->priority){
				t = right_rotatn(t);
				t->right = delete(t->right, key);
			}
			else{
				t = left_rotatn(t);
				t->left = delete(t->left, key);
			}
	}
	/*looking afer key node, not yet found*/
	else{
		if(t->key > key) t->left = delete(t->left, key);
		else t->right = delete(t->right, key); 
	}
	return t;
}

/* print treap in-order fashion*/
void print_treap_inorder(treap *tp){
	if(!tp)
		return;
	print_treap_inorder(tp->left);
	printf("<%d,%d>, ", tp->key, tp->priority);
	print_treap_inorder(tp->right);
}


int main(void){
	
	treap *tp = NULL;
	tp = insert(tp, create_treap_node(3,9));
	tp = insert(tp, create_treap_node(2,5));
	tp = insert(tp, create_treap_node(20,12));
	tp = insert(tp, create_treap_node(4, 20));
	tp = insert(tp, create_treap_node(1,19));
	printf("Inorder traversal before deleting key = 1\n");
	print_treap_inorder(tp);
	tp = delete(tp, 1); 
	printf("\nInorder traversal after deleting key = 1\n");
	print_treap_inorder(tp);
	
	tp = delete(tp, 100);
	
	return 0;
}
