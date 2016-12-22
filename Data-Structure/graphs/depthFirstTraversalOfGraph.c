#include<stdio.h>
#include<stdlib.h>

typedef struct graph{
	int nVertices;   //number of vertices in the graph
	int nEdges;      //number of edges in the graph
	int **adjMatrix;
	}Graph;
	
Graph * createAdjMatrixOfGraph(Graph *);	
	
/* this will create Adjacency matrix of the undirected graph graph */
Graph * createAdjMatrixOfGraph(Graph *g){
	
	int i, u, v;
	
	g = (Graph *)malloc(sizeof(Graph));
	
	printf("Enter the number of Vertices and Edges:");
	scanf("%d%d", &g->nVertices, &g->nEdges);
	
	g->adjMatrix = (int **)malloc(sizeof(int) * g->nVertices);
	for(i = 0; i < g->nVertices; i++)
		g->adjMatrix[i] = (int *)malloc(sizeof(int) * g->nVertices);
	
	for(i = 0; i < g->nEdges; i++){
		printf("Reading the endpoints of an edge(u v):\n");
		scanf("%d %d", &u, &v);
		g->adjMatrix[u][v] = 1;
		g->adjMatrix[v][u] = 1;
		}
			
	return g;
	}
	
void printGraph(Graph *g){
	
	int i, j;
	
	printf("\n***Adjacency Matrix of Graph***\n");

	for(i = 0 ; i < g->nVertices; i++ ){
		
		printf("\n\t");
		for(j = 0 ; j < g->nVertices; j++ ){
			
			if( g->adjMatrix[i][j] ){
				printf("1 ");
				}
			else
				printf("0 ");
			}
		}
	}
		

void depthFirstTraversal(Graph *g, int u, int *visited){
	
	int i;
	visited[u] = 1;
	printf(" %d", u);
	for(i = 0; i < g->nVertices; i++){
		
		if( (g->adjMatrix[u][i]) && ( !(visited[i]) ) ){
			
			depthFirstTraversal(g, i, visited);
			
			}
		}
	}
	
int main(void){
	
	Graph *g = NULL;
	int *visited;
	
	g = createAdjMatrixOfGraph(g);
	printGraph(g);
	
	visited = (int *)malloc(g->nVertices*sizeof(int));
	
	printf("\nDepth First Traversal of the graph: ");
	depthFirstTraversal(g, 2, visited);
		
	return 0;
	}


