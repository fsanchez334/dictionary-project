#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    struct Node *next;
    char *word;
    char *definition;
};

struct List {
    struct Node *head;

};

int determiner(char *answer){
    int result = strcmp ("Yes", answer);
    return result;
}
void traverseList(struct List * list){
    struct Node *head = list -> head;
    while(head != NULL){
        char *one = head -> word;
        char *meaning = head -> definition;
	      printf("%s%s\n%s%s\n", "Word: ", one, "Definition: ", meaning);
        head = head -> next;
    }

}


int main(){
    printf("%s\n", "We are going to make a mini dictionary");



    printf("%s\n", "How many words will you be entering?");
    int amount = 0;
    
    scanf("%d", &amount);
    printf("%s%d\n", "You have entered: ", amount);
    
    char word[100];
    char *list_of_words[amount];
    int stop = 0;
    int counter = 0;
    
    struct Node container[amount];
    
    while(stop != amount)
    {
        printf("%s\n", "Enter the word: ");
        scanf("%s", word);
        printf("-------------------------------");
    
        int word_length = strlen(word);
        char *face = maker_function(word_length);
        strcpy(face, word);
        printf("%s\n", face);
    
        list_of_words[counter] = face;
        
        char define[500];
        printf("%s\n", "Please provide for the definition you provided");
        scanf("%s", define);
        
        int len_define = strlen(define);
        char *definer = maker_function(word_length);
        
        strcpy(definer, define);
        printf("%s\n", definer);
        
        
        struct Node *word_holder = makeNode(face, definer);
        container[counter] = *word_holder;
        ++counter;
        ++stop;
        
        
        
    }
    for(int j = 0; j < amount; j++){
        printf("%s\n", list_of_words[j]);
    }
    for(int i = 0; i < amount; i++){
        printf("%s\n", container[i].two);
    }
    
    return 0;


    return 0;
}
