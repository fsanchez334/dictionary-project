#ifndef _LISTFUNC_H_
#define _LISTFUNC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct List{
  struct Node *head;
};

struct Node {
  char word[10];
  char definition[100];
  struct Node *next;
};
int determineResponse(char *input){
    int result = strcmp("Yes", input);
    if(result == 0){
        return 0;
    }
    return 1;
}
 void push(struct List *list, struct Node *container){
    struct Node *beginner = list -> head;
    if(beginner == NULL){
        list -> head = (struct Node *) malloc(sizeof(struct Node));
        strcpy((list -> head) -> word, container -> word);
        strcpy((list -> head) -> definition, container -> definition);
        (list -> head) -> next = NULL;
        return;
    }
    while(beginner -> next){
        beginner = beginner -> next;
    }
    beginner -> next = (struct Node *) malloc(sizeof(struct Node));
    strcpy((beginner -> next) -> word, container -> word);
    strcpy((beginner -> next) -> definition, container -> definition);
    (beginner -> next) -> next = NULL;
}

void delimeterFunction(char *define){
    char dash = '-';
    int string_len = strlen(define);
    for(int i = 0; i < string_len; i++){
        if(define[i] == '-'){
            define[i] = ' ';
        }
    }
}

#endif /* #ifndef _CHARFUNC_H_ */
