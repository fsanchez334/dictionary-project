#include <stdlib.h>
#include <stdio.h>
#include "mylist.h"

struct Node *addFront(struct List *list, void *data){
    struct Node *new_one = (struct Node*) malloc(sizeof(struct Node));
    if(new_one == NULL){
        perror("malloc returned NULL");
	exit(1);
    }
    new_one-> data = data;
    new_one -> next = list -> head;
    list->head = new_one;
    
    return new_one;
}

void traverseList(struct List *list, void (*f)(void *)){
    struct Node *beginner = list -> head;
    while(beginner != NULL){
       f(beginner ->data);
       beginner = beginner -> next;
       
       
    }
}

struct Node *findNode(struct List *list, const void *dataSought, int (*compar) (const void *, const void *)){
  struct Node *starting_point = list -> head;
  struct Node *target = NULL;
  
  while(starting_point){
      if(compar(starting_point -> data, dataSought) == 0){
          target = starting_point;
	  return target;
      }
      starting_point = starting_point -> next;
  }
  return target;  

}

void flipSignDouble(void *data){
    double *change = (double *) data;
    *change = (*change) * -1;
    
}
int compareDouble(const void *data1, const void *data2){
    double *holder1 = (double *) data1;
    double *holder2 = (double *) data2;

    if(*holder1 == *holder2){
        return 0;
    }
    return 1;
}

void *popFront(struct List *list){
    if(isEmptyList(list)){
        return 0; 
    }

    struct Node *starter = list -> head;
    void *data = starter -> data;
    
    list -> head = starter -> next;
    free(starter);

    //list -> head = starter -> next;


    return data;

}

void removeAllNodes(struct List *list){
    
    while(isEmptyList(list) == 0){
        popFront(list);
    }
    free(list);

}
struct Node *addAfter(struct List *list, struct Node *prevNode, void *data){
    if(prevNode == NULL){
      return addFront(list, data);
    }
    struct Node *holder = (struct Node *) malloc(sizeof(struct Node));
    if(holder == NULL){
        perror("malloc returned NULL");
	exit(1);
    }

    holder -> data = data;
    holder -> next = prevNode->next;
    prevNode -> next = holder;

    return holder;

}
void reverseList(struct List *list){
    struct Node *prev = NULL;
    struct Node *current = list -> head;
    struct Node *next;

    while(current){
        next = current -> next;
        current -> next = prev; //changes the pointer direction??
        prev = current;	
	current = next;
    }

    list->head = prev;

}




