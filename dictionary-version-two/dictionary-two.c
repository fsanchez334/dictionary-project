#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "listfunc`.h"


int main()
{
    printf("Hello World\n");
    
    char word_main[10];
    char definition_main[150];
    int compar = 0;
    int head = 0;
    struct List *dictionary = (struct List *) malloc(sizeof(struct List));
    
    while(compar == 0){
    
        printf("%s\n", "Please enter a word");
        scanf("%s", word_main);
    
        printf("%s\n", "Please enter a definition");
        scanf("%s", definition_main);
    
        struct Node *starter = (struct Node *) malloc(sizeof(struct Node));
        starter -> word = word_main;
        starter -> definition = definition_main;

	if(head == 0){
	    dictionary -> head = starter;
	    head = 1;
	}
	
	addNode(dictionary, starter -> word, starter -> definition);

	char response[5];
	printf("%s\n", "Would you like to continue using our dictionary? Yes/No");
	scanf("%s", response);

	int result = determiner(response);
	if(response != 0){
	    compar = 1;
	}
    }

    traverseDiction(dictionary);
    

    return 0;
}
