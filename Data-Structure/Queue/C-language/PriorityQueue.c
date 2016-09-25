// View complete tutorial with explanation on Codingeek - 
// http://www.codingeek.com/data-structure/priority-queue-introduction-explanation-and-implementation/

#include<stdio.h>
#define MAX 4
 
int pQueue[MAX];   //creating an array for prioriy queue with capacity 4
int FRONT;
int REAR;  
 
void insert(int item){
 
    if(REAR == MAX){
        printf("Priority Queue overflow\n");
        return ;
        }
    else{
        pQueue[REAR++] = item;
        printf("Item %d inserted\n", item);
        }
    }
 
int delete(){
 
    if(FRONT == REAR){
        printf("Priority Queue Underflow\n");
        return -1;
        }
    return pQueue[FRONT++];
    }
 
int peek(){                     /* return highest priority item*/
 
    return pQueue[FRONT];
 
    }
 
/* smaller the index higher the priority */
     
int main(void){
 
    int itemDeleted;
    int maxPriorityItem;
     
    insert(10);
    insert(45);
     
    maxPriorityItem = peek();
    printf("Highest priority item: %d\n", maxPriorityItem);
     
    insert(30);
    insert(99);
     
 
    printf("\n");
 
    itemDeleted = delete();
    printf("Item %d deleted\n", itemDeleted);
     
    maxPriorityItem = peek();
    printf("Highest priority item: %d\n", maxPriorityItem);
     
    itemDeleted = delete();
    printf("Item %d deleted\n", itemDeleted);
 
    itemDeleted = delete();
    printf("Item %d deleted\n", itemDeleted);
     
    itemDeleted = delete();
     
    return 0;   
}
