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
void makeList(struct List *list, struct Node *starter){
     list -> head = starter;
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

    struct List *dictionary = (struct List *) malloc(sizeof(struct List));
    if(dictionary == NULL){
        perror("Malloc for the list could not be reserved");
        exit(1);
    }

    int end = 0;

    while (end != 1) {


    printf("%s\n", "Please enter a word");

    char buffer[100];
    char buffer_second[1000];
    int amount = 0;

    scanf("%s", buffer);
    printf("%s%s\n", "You have entered " , buffer);

    printf("%s\n", "Please enter a definition - Make sure to put '-' in between the words");
    scanf("%s", buffer_second);

    struct Node *vessel = (struct Node *) malloc(sizeof(struct Node));
    if(vessel == NULL){
 	    perror("Node could not be formed");
	    exit(1);
    }
    vessel -> word = buffer;
    vessel -> definition = buffer_second;
 }





    printf("%s\n", "Thank you for using our dictionary. Have a good day");





    return 0;
}
