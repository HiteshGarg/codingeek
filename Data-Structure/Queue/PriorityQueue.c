// View complete tutorial with explanation on Codingeek - 
// http://www.codingeek.com/data-structure/priority-queue-introduction-explanation-and-implementation/

#include<stdio.h>
#include<stdlib.h>
 
typedef struct priorityQueueNode{
    int item;
    int priority;
    struct priorityQueueNode *next;
    }pqNode;
 
/*It takes O(n) time to search for same priority and O(1) to insert the item*/
pqNode * push(pqNode *head, int item, int priority){
 
    pqNode *list = head;
    pqNode *temp = (pqNode *)malloc(sizeof(pqNode));
 
    while(list){
        if(list->priority == priority){
            printf("An item with the same priority already exists\n");
                return head;
        }
    list = list->next;
    }/*checking if the new item possess existing priority  */
 
    temp->item = item;
    temp->next = NULL;
    temp->priority = priority;
     
    list = head;
    printf("Item %d pushed\n", item);
    if(list == NULL)
        return temp;
    else{
        temp->next = list;
        return temp;
        }
}
 
/* It takes O(n) time to search the highest priority item and O(1) to delete */
pqNode * pop(pqNode *head){
 
    pqNode *list = head;
    pqNode *temp = NULL;
    pqNode *p = NULL, *q = NULL;
 
    int maxPriority = 0; //to find the item with highest priority
 
    if(!list){
        printf("\nUnderflow");
        return list;
    }
    else if(!list->next)
        return NULL;
    else{
        while(list){            
            if(list->priority > maxPriority){
                maxPriority = list->priority;
                p = temp;  //pointing to previous to the highest priority node
                q = list;  //pointing the highest priority node
            }
            temp = list;
            list = list->next;
        }
        p->next = q->next;
        printf("Item %d deleted\n", q->item);
        free(q);
        return head;
    }   
}
 
void peek (pqNode *head){
 
    pqNode *list = head;
    int maxPriorityItem;
    int maxPriority = 0;
 
    if(!list)
        printf("List is empty\n");
         
    while(list){
        if(list->priority > maxPriority){
            maxPriority = list->priority;
            maxPriorityItem = list->item;
        }       
        list = list->next;
    }
    printf("Highest priority item: %d\n", maxPriorityItem);
}   
 
int main(void){
 
    pqNode* head;
    pqNode* first = (pqNode*)malloc(sizeof(pqNode)); 
    pqNode* second = (pqNode*)malloc(sizeof(pqNode));
     
    //ASSIGNINMENT
    first->item = 2000; //assign data in first node along with the priority
    first->priority = 5;
    first->next = second; // Link first node with second 
 
    second->item = 1000; //assign data to second node along with the priority
    second->priority = 8;
    second->next = NULL;
 
    head = first;    //head pointing to the list
 
    head = push(head, 5000, 6);
    peek(head);
    head = pop(head);
    peek(head);
    head = push(head, 3000, 5); //operation will be dropped as priority 5 already exists
    return 0;
}
