#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
/* use the gcc 5.4 or above, for lower version, all the declaration should be at the 
 * top of respective block*/  
 
/*It's a heap that contain vertex as well as the distance to source element specified*/     
typedef struct HeapNode{
	int distance;
	int vertexID;
	}heapNode; 

/* PositionOfVertex[]:
 * since we need to update the distance if require, therefore position of vertex must be
 * known in advance otherwise we end up searching the whole heap, to decrease the distance 
 * of a vertex. In every operation of heap, whenever heap is restructured postion of vertex 
 * will be updated as well*/
  
typedef struct HeapDataStructure{
    int heapSize;
    int capacity;
    int *positionOfVertex;
    heapNode *array;
}Heap;

Heap *minHeap;
heapNode* createNewHeapNode(int vertexID, int distance); //creating the node as required
Heap *createHeap(int capacity);
void insert(Heap *minHeap, heapNode *);
void decreaseKey(int nDistance, int index);
heapNode extractMin();
void minHeapify(int );
void swap(int , int );

heapNode* createNewHeapNode(int vertexID, int distance){
    heapNode* temp = (heapNode*)malloc(sizeof(heapNode));
    temp->vertexID = vertexID;
    temp->distance = distance;
    return temp;
}
 
Heap *createHeap(int capacity){  
    Heap *minHeap;
    minHeap = (Heap *)malloc(sizeof(Heap));
    minHeap->array = (struct HeapNode *)\
		malloc( sizeof(struct HeapNode)*capacity );
    minHeap->capacity = capacity;
    minHeap->heapSize = 0;
	
	minHeap->positionOfVertex = (int *)malloc(capacity * sizeof(int));
    return minHeap;
}
              
void insert(Heap *minHeap, heapNode *nNode){
    int temp = minHeap->heapSize;
     
    if(minHeap->heapSize == minHeap->capacity){
        printf("Heap overflow\n");
		return ;
		}
         
    minHeap->heapSize++ ;
    minHeap->array[temp] = *nNode;

    minHeap->positionOfVertex[nNode->vertexID] = temp;
    if(minHeap->heapSize == 1){
        return ;
		}
    
    while(minHeap->array[(temp-1)/2].distance > nNode->distance && temp != 0){
        minHeap->array[temp] = minHeap->array[(temp-1)/2];
        int k = minHeap->array[temp].vertexID;
        minHeap->positionOfVertex[k] = temp;
        temp = (temp-1)/2;
    }
    minHeap->array[temp] = *(nNode);
    minHeap->positionOfVertex[nNode->vertexID] = temp;
}

void decreaseKeyMinHeap(int nDistance, int index){
     
    if(minHeap->array[index].distance <= nDistance)
        printf("Invalid operation\n");
    else{
        heapNode tmp = minHeap->array[index];
        tmp.distance = nDistance;
        int temp = index;
        while(minHeap->array[(temp-1)/2].distance > nDistance && temp != 0){
            minHeap->array[temp] = minHeap->array[(temp-1)/2];
            int k = minHeap->array[temp].vertexID;
			minHeap->positionOfVertex[k] = temp;
            temp = (temp-1)/2;
        }
        minHeap->array[temp] = tmp;
        minHeap->positionOfVertex[tmp.vertexID] = temp;
    } 
}

heapNode extractMin(){
	 heapNode extractedMinNode;
	 /*in the calling function if the return contains the vertex "-1", means underflow*/
	 extractedMinNode.vertexID = -1; 
    if(minHeap->heapSize == 0){
        printf("Heap Underflow\n");
        return extractedMinNode;
    }
    else{
        int temp = minHeap->heapSize-1;
        extractedMinNode = minHeap->array[0];
        minHeap->array[0] = minHeap->array[temp];
		
		int k = minHeap->array[temp].vertexID;
        minHeap->positionOfVertex[k] = 0;
        
        minHeap->heapSize--; 
        minHeapify(0);   
		printf("Key Extracted:%d\n", extractedMinNode.vertexID);
        return extractedMinNode;
    }
}

void minHeapify(int i){
     
    int L, R, smallest; 
    L = 2*i+1; R = 2*i+2; 
     
    if(L <= minHeap->heapSize-1 && \
			minHeap->array[L].distance < minHeap->array[i].distance)
        smallest = L;
    else
        smallest = i;
     
    if(R <= minHeap->heapSize-1 && \
			minHeap->array[R].distance < minHeap->array[smallest].distance)
        smallest = R;
    
    if(smallest != i){
        swap(i, smallest);
        minHeapify(smallest);
    }
}       

void swap(int i, int j){
    int k = minHeap->array[i].vertexID, l = minHeap->array[j].vertexID;
    int m = minHeap->positionOfVertex[k];
    /*swaping two node of the heap involves swaping of postion as well */ 
	minHeap->positionOfVertex[k] = minHeap->positionOfVertex[l];
	minHeap->positionOfVertex[l] = m;
   
    heapNode tmp = minHeap->array[i];
    minHeap->array[i] = minHeap->array[j];
    minHeap->array[j] = tmp;;
    }

int isMinHeapEmpty(){
	if(!minHeap->heapSize)
		return 1;   //heap non-empty
	else 
		return 0;
	}    
    
typedef struct linkedListNode{   
    int vertex;   
    int weight;                          
    struct linkedListNode *next;
}listNode;
 
typedef struct adjecencyList{
    listNode *head;
}adjList;   
     
typedef struct graph{
    int nVertices;   //number of vertices in the graph
    int nEdges;      //number of vertices in the graph
    adjList *array;  // array of adjacency list
}Graph;
     
Graph *addEdge(Graph *, int , int, int );
Graph *createAdjListOfGraph(Graph *, int, int);
void printGraph(Graph *);

Graph *createAdjListOfGraph(Graph *g, int noVertices, int noEdges){

    g = (Graph *)malloc(sizeof(Graph));
    g->nVertices = noVertices; g->nEdges = noEdges; 
     
    /*size of array of adjacency list will be total number of vertices */
    g->array = (adjList *)malloc(sizeof(adjList) * g->nVertices);
     
    for(int i = 0; i < g->nVertices; i++)
        g->array[i].head = NULL;
      
    return g;
}
 
Graph *addEdge(Graph *g, int u, int v, int weight){
     
    listNode *temp1, *temp2; 
  
  /* each node in a adjacency list contain the distance between it and the head node of the list*/   
    temp1 = (listNode *)malloc(sizeof(listNode));
    temp1->vertex = v;
    temp1->weight = weight;
    temp1->next = g->array[u].head;
    g->array[u].head = temp1;
      
    temp2 = (listNode *)malloc(sizeof(listNode));
    temp2->vertex = u;
    temp2->weight = weight;
    temp2->next = g->array[v].head;
    g->array[v].head = temp2;
     
    return g;
}   

void dijkstras(Graph *g, int srcVertex){
	/* dist[j] will contain the distances from source to j*/
	int dist[g->nVertices]; int visited[g->nVertices];
	int minHeapCapacity = g->nVertices;
	minHeap = createHeap(minHeapCapacity); 

/* visited shows everytime a vertex is exctraced, it becomes visited. Means next time,
 * visited node will not be checked from its adjacent node if there's shorted path as 
 * shortest path is already calculated*/
		
	/*initializing the heap with each nodes distances as infinity and visited as all 0 */	
	insert(minHeap, createNewHeapNode(srcVertex, 0)); visited[0] = 0; dist[srcVertex] = 0;
	for(int i = 1; i < g->nVertices; i++){
		insert(minHeap, createNewHeapNode(i, INT_MAX));	
		visited[i] = 0;
		}
		
	while(!isMinHeapEmpty()){
		heapNode extractedNode = extractMin();
		
		int v = extractedNode.vertexID; visited[v] = 1; int vDist = extractedNode.distance;
		
		/*checking out all the adjacent vertex and updating the distances if shorter found */
		listNode *temp = g->array[v].head;
        while (temp){
            int u = temp->vertex; int nDistance = vDist + temp->weight;
            /* temp->weight is the cost/distance of edge v to u*/
			
			if(!visited[u]){ 
				int posU = minHeap->positionOfVertex[u]; int uDist = minHeap->array[posU].distance;
				if(nDistance < uDist){
					dist[u] = nDistance;
					decreaseKeyMinHeap(dist[u], posU);
					}
				}
			temp = temp->next;
			}
		}
	

	 int i = -1;
	 printf("\nVertexID\tShortest Distance to source");
	 while(++i < g->nVertices)
		printf("\n%d\t\t%d", i, dist[i]);
	} 
 
 
int main(void){

    Graph *g = NULL;
	g = createAdjListOfGraph(g, 6, 9);    
	g = addEdge(g, 0, 1, 7);
	g = addEdge(g, 0, 5, 14);
	g = addEdge(g, 0, 2, 9);
	g = addEdge(g, 1, 2, 10);
	g = addEdge(g, 1, 3, 15);
	g = addEdge(g, 2, 3, 11);
	g = addEdge(g, 2, 5, 2);
	g = addEdge(g, 3, 4, 6);
	g = addEdge(g, 4, 5, 9);
    
	dijkstras(g, 0);
 
	return 0;
}
