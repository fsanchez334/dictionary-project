#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct List{
    struct Node *head;
};

struct Node{
    char *word;
    char *definition;
    struct Node *next;
};

void addNode(struct List *list, char *data, char *data_two){
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    if (newNode == NULL){
         fprintf(stderr, "Could not allocate memory for new Node");
	 exit(1);
    }

    struct Node *temp = list -> head;

    newNode -> word = data;
    newNode -> definition = data_two;

    while(temp -> next){
        temp = temp -> next;
    }

    temp -> next = newNode;


}

void traverseDiction(struct List *list){
     struct Node *holder = list -> head;

     while(holder){
          printf("%s%s\n", holder -> word, "|");
	  printf("%s", holder -> definition);

	  holder = holder -> next;

     }
}

int determiner(char *response){
    int result = strcmp("Yes", response);
    return result;
}
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
	if(respnse != 0){
	    compar = 1;
	}
    }

    traverseDiction(dictionary);
    

    return 0;
}
