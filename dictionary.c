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

struct Node* makeNode(char *copy, char *copy_two){
    struct Node *love = (struct Node *) malloc(sizeof(struct Node));
    love -> word = copy;
    love -> definition = copy_two;
    love -> next = NULL;
    return love;
}

char *maker_function(int length){
     char *holder = (char *) malloc(length);
     return holder;

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

        ++counter;
        ++stop;
    }
    for(int j = 0; j < amount; j++){
        printf("%s\n", list_of_words[j]);
    }

    return 0;
}
