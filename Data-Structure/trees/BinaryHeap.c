#include<stdio.h>
#include<stdlib.h>

typedef struct HeapDataStructure{
	unsigned short heapSize;
	unsigned short capacity;
	int *heap;
}Heap;
	
Heap *createHeap(unsigned short );
Heap *increaseKey(Heap *, int , int );
Heap *maxHeapify(Heap *, int );
Heap *insert(Heap *, int );
Heap *extractMax(Heap *);
int getMax(Heap *);
void swap(int *, int *);
void printHeap(Heap *);
	
/* on calling it, creates a heap data structure*/	
Heap *createHeap(unsigned short capacity){	
	Heap *maxHeap;
	maxHeap = (Heap *)malloc(sizeof(Heap));
	maxHeap->heap = (int *)malloc( sizeof(int)*capacity );
	maxHeap->capacity = capacity;
	maxHeap->heapSize = 0;
	
	return maxHeap;
}
			
void swap(int *p, int *q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
	
/* inserting key to maxHeap, this would take O(logn)*/	
Heap * insert(Heap *maxHeap, int key){
	int temp = maxHeap->heapSize;
	
	if(maxHeap->heapSize == maxHeap->capacity)
		printf("\nHeap overflow");
		
	maxHeap->heapSize++ ; //size of heap increamented by 1
	maxHeap->heap[temp] = key; //storing key to heap, stored at the last index of array	
	
	if(maxHeap->heapSize == 1)
		return maxHeap;
		
	/* 1) n case heapSize > 1, new key is supposed to follow maxKey property,
	 * thus, comparing with its parent and to grand parents.
	 * 2) (temp-1)/2, index of the parent of a key
	 * 3) This while loop takes O(logn) time*/	
	while(maxHeap->heap[(temp-1)/2] < key && temp != 0){
		maxHeap->heap[temp] = maxHeap->heap[(temp-1)/2];
		temp = (temp-1)/2;
	}
	maxHeap->heap[temp] = key;
	
	return maxHeap;
}
/*increasing the a key at given index */
Heap *increaseKey(Heap *maxHeap, int nKey, int index){
	int temp;
	
	if(maxHeap->heap[index] >= nKey)
		printf("\nInvalid operation");
	else{
		maxHeap->heap[index] = nKey;
		temp = index;
		while(maxHeap->heap[(temp-1)/2] < nKey && temp != 0){
			maxHeap->heap[temp] = maxHeap->heap[(temp-1)/2];
			temp = (temp-1)/2;
		}
		maxHeap->heap[temp] = nKey;
	}
		
	return maxHeap;	
}	
	
Heap *maxHeapify(Heap *maxHeap, int i){
	
	int L, R, largest; // L as left, R as right
	
 /*children key at i are at 2*i+1 and 2*i+2, as index starts with 0*/	
	L = 2*i+1;
	R = 2*i+2; 
	
	if(L <= maxHeap->heapSize-1 && maxHeap->heap[L] > maxHeap->heap[i])
		largest = L;
	else 
		largest = i;
	
	if(R <= maxHeap->heapSize-1 && maxHeap->heap[R] > maxHeap->heap[largest])
		largest = R;
	
	if(largest != i){
		swap(&(maxHeap->heap[i]), &(maxHeap->heap[largest]));
		maxHeapify(maxHeap, largest);
	}
	return maxHeap;
}		
/*it extracts the maxkey of the heap, which will be at root(index 0) */
Heap *extractMax(Heap *maxHeap){
	int temp, extractedKey;
	
	if(maxHeap->heapSize == 0){
		printf("\nHeap Underflow");
		return maxHeap;
	}
	else{
		temp = maxHeap->heapSize-1;
		//swaping lastKey to root and decreasing the heapSize by 1
		extractedKey = maxHeap->heap[0];
		maxHeap->heap[0] = maxHeap->heap[temp];
		maxHeap->heapSize--;
		
		maxHeap = maxHeapify(maxHeap, 0); 	
		
		printf("\nKey Extracted:%d", extractedKey);
		return maxHeap;
	}
}
	
int getMax(Heap *maxHeap){
	return maxHeap->heap[0];
}

void printHeap(Heap *maxHeap){
	int i;
	printf("\nKeys in Heap:");
	for( i = 0; i < maxHeap->heapSize; i++ )
		printf("%d ", maxHeap->heap[i]);
}

int main(void){
	
	int getMaxKey;
	
	Heap *maxHeap;
	unsigned short capacity  = 10; //max size of heap is 10
	maxHeap = createHeap(capacity);
	
	/* creating a heap with 5, 10, 40, 30, 20*/
	maxHeap = insert(maxHeap, 5);
	maxHeap = insert(maxHeap, 10);
	maxHeap = insert(maxHeap, 40);
	maxHeap = insert(maxHeap, 30);
	maxHeap = insert(maxHeap, 20);
		
	printHeap(maxHeap);
	
	getMaxKey = getMax(maxHeap);
	printf("\nMaxKey: %d\n",getMaxKey);
	
	maxHeap = increaseKey(maxHeap, 7, 2); //increaseKey(Heap* ,nKey, index )	
	printHeap(maxHeap);
		
	maxHeap = increaseKey(maxHeap, 50, 1);
	printHeap(maxHeap);	
	
	maxHeap = extractMax(maxHeap);
	printHeap(maxHeap);
		
	return 0;
}
