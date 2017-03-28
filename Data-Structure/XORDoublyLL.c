#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *xorLink;
	}Node;

Node *createNode(int data){
	Node *p = (Node *)malloc(sizeof(Node));
	p->data = data;
	p->xorLink = NULL;
	return p;
	}
	
/* nodes are inserted at the beginning of linked list*/	
Node * insert(Node *p, int data){

	Node *nNode = createNode(data);

/* if this is the first node*/
	if(!p){
		p = nNode;
		}
/* if this one is the second node*/		
	else if(!p->xorLink){
	/* the new node added as beginning node will have no prev node, hence 
	 * its link contain XORing of 0 with next node*/		
		nNode->xorLink = 0 ^ (unsigned int)p;	
		p->xorLink = (unsigned int)nNode ^ 0; 
		}
/* if this one is neither second or first node*/		
	else{
		nNode->xorLink = 0 ^ (unsigned int)p;
		/* every intermediate node will contain link as XORing of nodes prev 
		 * and next to it*/
		p->xorLink = (unsigned int)nNode ^ (unsigned int)(p->xorLink);
		}
		
	return nNode;
	}
	
/* this will delete the node at the beginning of list*/	
Node * delete(Node *p){
	
	Node *temp;
	
	if(!p)
		printf("\nList underflow");
	
	/* if there is only one node*/
	else if(!p->xorLink){
		free(p);
		p = NULL;
		}
		
	else{
		/* if the list contain two nodes only*/
		if(p == p->xorLink->xorLink){
			temp = p;
			p = p->xorLink;
			p->xorLink = NULL;
			}
		/* list contain more than two nodes*/	
		else{
			temp = p;
			p = p->xorLink;
		p->xorLink = (unsigned int)p->xorLink ^ (unsigned int)temp;
		}
	free(temp);	
	}
		
	return p;
}
	
void display(Node *p){

	struct node *temp = p, *prev = NULL, *next;
  
    printf ("\nNodes of Linked List: ");
 
    while (temp != NULL){
        printf ("%d ", temp->data);
 
      /* A XOR (A XOR B) gives B, this is used to compute next node address*/
        next = (unsigned int)prev ^ (unsigned int)temp->xorLink;
 
        prev = temp;
        temp = next;
    }
}	
int main(void){
	
	Node *head = NULL;
	
	head = insert(head, 1);
	head = insert(head, 2);
	head = insert(head, 3);
	
	display(head);
	head = delete(head);
	display(head);
	
	return 0;
	}
