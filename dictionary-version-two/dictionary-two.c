#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "listfunc`.h"


int main()
{
    printf("Hello World\n");
    
    int go_flag = 0;
    struct List *dictionary = (struct List *) malloc(sizeof(struct List));
    
    while(go == 0){
    
	char input_one[10];
	char definition_one[100];
	char user[10];

        printf("%s\n", "Please enter a word");
        scanf("%s", input_one);
    
        printf("%s\n", "Please enter a definition");
        scanf("%s", definition_one);

    
        struct Node *beginner = (struct Node *) malloc(sizeof(struct Node));
        strcpy(beginner -> word, input one);
	strcpy(beginner -> definition, definition_one);

	push(dictionary, beginner);
	
	printf("%s\n", "Would you like to continue using our dictionary? Yes/No");
	scanf("%s", response);

	int compare = determineResponse(user);
	if(compare == 1){
	    go = 1;
	}
    }

    struct Node *head = dictionary -> head;
    while(head){
        printf("%s\n", head -> word);
	printf("%s\n", head -> definition);

	head = head -> next;
    }
    

    return 0;
}
