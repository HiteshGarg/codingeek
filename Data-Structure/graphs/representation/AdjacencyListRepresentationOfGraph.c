#include<stdio.h>
#include<stdlib.h>
	
/*representing a node */	
typedef struct linkedListNode{   
	int vertex;                             
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
	
Graph *addEdge(Graph *, int , int );
Graph *createAdjListOfGraph(Graph *);
void printGraph(Graph *);


/* this will create Adjacency list of the undirected graph graph */
Graph *createAdjListOfGraph(Graph *g){
	
	int i, u, v;
	
	g = (Graph *)malloc(sizeof(Graph));
	
	printf("Enter the number of Vertices and Edges:");
	scanf("%d%d", &g->nVertices, &g->nEdges);	
	
	/*size of array of adjacency list will be total number of vertices */ 
	g->array = (adjList *)malloc(sizeof(adjList) * g->nVertices);
	
	for(i = 0; i < g->nVertices; i++)
		g->array[i].head = NULL;
		
	for(i = 0; i < g->nEdges; i++){
		
		printf("Reading the endpoints of an edge(u v):\n");
		scanf("%d %d", &u, &v);
		g = addEdge(g, u, v);
    }
			
	return g;
}

/* adding edge whose endpoints are u and v*/
Graph *addEdge(Graph *g, int u, int v){
	
	listNode *temp1, *temp2;
	
	temp1 = (listNode *)malloc(sizeof(listNode));
	temp1->vertex = v;
	temp1->next = g->array[u].head;
	g->array[u].head = temp1;
	
	temp2 = (listNode *)malloc(sizeof(listNode));
	temp2->vertex = u;
	temp2->next = g->array[v].head;
	g->array[v].head = temp2;
	
	return g;
}	

void printGraph(Graph *g)
{
    int i;
    printf("\n***Adjacency list of the graph:***");
    for (i = 0; i < g->nVertices; i++)
    {
        listNode *temp = g->array[i].head;
        printf("\nVertex %d", i);
        while (temp)
        {
            printf("->%d", temp->vertex);
            temp = temp->next;
        }
    }
}


int main(void){
	
	Graph *g = NULL;
	
	g = createAdjListOfGraph(g);
	
	printGraph(g);
	
	return 0;
}
