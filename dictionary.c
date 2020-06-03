#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "charfunc.h"

int main(){
    printf("%s\n", "We are going to make a mini dictionary");
    printf("%s\n", "How many words will you be entering?");
    int amount = 0;

    scanf("%d", &amount);
    printf("%s%d\n", "You have entered: ", amount);

    char word[100];
    char *list_of_words[amount];
    char *word_definitions[amount];
    int stop = 0;
    int counter = 0;

    struct Node container[amount];

    while(stop != amount)
    {
        printf("%s\n", "Enter the word: ");
        scanf("%s", word);

        int word_length = strlen(word);
        char *face = maker_function(word_length);
        strcpy(face, word);

        list_of_words[counter] = face;

        char define[500];
        printf("%s\n", "Please provide for the definition you provided");
        printf("%s\n", "In between each word, please include a dash");
        scanf("%s", define);

        char *response = delimeterFunction(define);
        int len_define = strlen(define);
        char *definer = maker_function(word_length);

        strcpy(definer, define);
        word_definitions[counter] = definer;

        ++counter;
        ++stop;
    }
    printf("%s\n", "Your dictionary: ");
    int tracker = 1;
    for(int j = 0; j < amount; j++){
        printf("%d%s%s%s", tracker, ". ", list_of_words[j], " - ");
        printf("%s\n", word_definitions[j]);
        ++tracker;
    }

    return 0;
}
