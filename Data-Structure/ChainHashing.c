#include<stdio.h>
#include<stdlib.h>
#define LOAD_FACTOR 5

typedef struct listNode{
	int key;
	int data;
	struct listNode *next;
	}ListNode;
typedef struct hashTableNode{
	int bCount;          // count of elements in a block or chain
	ListNode *next;
	}HashTableNode;
typedef struct hashTable{
	int countOfElement;  //count of elements in the hash table
	int tCapacity;       // table capacity/size/slots
	HashTableNode *table;
	}HashTable;
			
HashTable *h = NULL;
			
int hashFun(int data, int tCapacity){
	return data % tCapacity;
	}		
void createHashTable(int noOfEelement){
	
	h = (HashTable*)malloc(sizeof(HashTable));
	h->countOfElement = 0;
	h->tCapacity = noOfEelement/LOAD_FACTOR; 
	h->table = (HashTableNode *)malloc(h->tCapacity * sizeof(HashTableNode));
	
	for(int i = 0; i<h->tCapacity; i++){
		h->table[i].next = NULL;
		h->table[i].bCount = 0;
		}
	}	
ListNode *createNode(int data){
	ListNode *temp;
	temp = (ListNode *)malloc(sizeof(ListNode));
	
	int index = hashFun(data, h->tCapacity);
	temp->key = index;
	temp->data = data;
	temp->next = NULL;
	
	return temp;
	}				
int searchToHashTable(int data){
	int index = hashFun(data, h->tCapacity);
	ListNode *temp = h->table[index].next;
	
	while(temp){
		if(temp->data == data) 
			return 1;
		temp = temp->next;
		}

	return 0;	
	}
void reHash(){

	HashTableNode *oldTable;
	int oldCapacity = h->tCapacity;
	oldTable = h->table; h->tCapacity = h->tCapacity*2;
	
	h->table = (HashTableNode *)malloc(sizeof(HashTableNode) * h->tCapacity);
	if(!h->table){
		printf("Allocation Failed");
		return;
		}
	for(int i = 0; i<h->tCapacity; i++){
		h->table[i].next = NULL;
		h->table[i].bCount = 0;
		}
	
	for(int i = 0; i<oldCapacity; i++){
		ListNode *temp = oldTable[i].next, *temp2;
		while(temp){
			int index = hashFun(temp->data, h->tCapacity);
			temp2 = temp; temp = temp->next;
			
			if(h->table[index].bCount){
				temp2->next = h->table[index].next;
				h->table[index].next = temp2;
				h->table[index].bCount++;
				}
			else{
				h->table[index].next = temp2; temp2->next = NULL;
				h->table[index].bCount++;
				}
					
			}
		}
	}			
int insertToHashTable(ListNode *newNode){
	
	int index = newNode->key;
	int data = newNode->data;
	if(searchToHashTable(data))
		return -1;
		
	newNode->next = h->table[index].next;
	h->table[index].next = newNode;
	h->table[index].bCount++;
	h->countOfElement++;
	
	if(h->countOfElement > h->tCapacity * LOAD_FACTOR)
		reHash();
	
	return 1;
	}

int deleteToHashTable(int data){
	
	int index = hashFun(data, h->tCapacity); 
	ListNode *temp = h->table[index].next, *prev = NULL; 
	while(temp){
		if(temp->data == data){
			if(prev != NULL){
				prev->next = temp->next;}
			else{
				h->table[index].next = temp->next;}
				
			free(temp);
			h->table[index].bCount--;
			h->countOfElement--;
			return 1;
			}
			prev = temp; temp = temp->next;
		}
	return 0;
	}

int main(void){
	
	createHashTable(10);
	
	insertToHashTable(createNode(10));
	insertToHashTable(createNode(11));
	insertToHashTable(createNode(12));
	insertToHashTable(createNode(13));
	insertToHashTable(createNode(14));
	insertToHashTable(createNode(20));
	
	/*searching element 21 when it's not in the table*/
	if(searchToHashTable(21))
		printf("Found");
	else
		printf("Not found");
	
	insertToHashTable(createNode(21));
	
	/*searching element 21 when it's in the table*/
	if(searchToHashTable(21))
		printf("\nFound");
	else
		printf("\nNot Found");
		
	if(deleteToHashTable(21))
		printf("\nElement 21 deleted");
	
	/*searching element 21 when it's deleted from the table*/
	if(searchToHashTable(21))
		printf("\nFound");
	else
		printf("\nNot Found");	
	
	insertToHashTable(createNode(26));	
	insertToHashTable(createNode(22));
	insertToHashTable(createNode(23));
	insertToHashTable(createNode(24));
	
	printf("\n\n****Hash Table before capacity get doubled****");
	printf("\nTable Capacity = %d, Total elements = %d\n", h->tCapacity, h->countOfElement); 
	for(int i = 0; i<h->tCapacity; i++){
		printf("[%d]", i);
		for(ListNode *temp = h->table[i].next; temp; temp=temp->next){
			if(temp->next)
				printf("%d->", temp->data);
			else
				printf("%d", temp->data);
			}	
		printf("\n");	
		}
		
    /*after the execution of below line number of elements become 11
     * LOAD_FACTOR = 11/TableCapacity = 11/5 = 5.2
     * 5.2 > actual LOAD_FACTOR decided. Thus, Capacity of Table has to be doubled*/		
	insertToHashTable(createNode(34));
	
	printf("\n****Hash Table after capacity get doubled****");
	printf("\nTable Capacity = %d, Total elements = %d\n", h->tCapacity, h->countOfElement);
	for(int i = 0; i<h->tCapacity; i++){
		printf("[%d]", i);
		for(ListNode *temp = h->table[i].next; temp; temp = temp->next){
			if(temp->next)
				printf("%d->", temp->data);
			else
				printf("%d", temp->data);
			}	
		printf("\n");	
		}
		
	return 0;
	}
