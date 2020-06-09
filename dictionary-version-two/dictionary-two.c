#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct List{
    struct Node *head;
};

struct Node{
    char *word;
    char *definition;
};

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
    struct List *dictionary = (struct List *) malloc(sizeof(struct List));
    
    while(compar != 0){
    
        printf("%s\n", "Please enter a word");
        scanf("%s", word_main);
    
        printf("%s\n", "Please enter a definition");
        scanf("%s", definition_main);
    
        struct Node *starter = (struct Node *) malloc(sizeof(struct Node));
        starter -> word = word_main;
        starter -> definition = definition_main;
    }
    

    return 0;
}
