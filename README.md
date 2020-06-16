Name:Fernando Sanchez
Date: June 03, 2020

Description of the Dictionary Project:

    The purpose of this project is to mimic the behavior of a dictionary. The program asks the user for the amount of words that will be defined. Afterward, the program allocates some space for those words, and creates an array of char pointers to hold them. Following this, the program asks the user to provide the definition for the word; however, the program specifies that the user place the character '-'. Because the scanf()function breaks upon encountering a space of NULL terminator, the character allows the program to read in all the characters from standard input. After the definition is received, space is allocated for the definition and placed into an array that stores pointers to each definition. Finally, after the user finishes providing the words and definition, the program loops through both arrays (the array containing the words and the other containing the definitions)

Future Implementations:
    With regards to further implementations, I am thinking about implementing a dictionary using a linked list - as I had originally planned. At the same time, as the prgram currently stands, there is memory that is being leaked, as I am not freeing up the memory that is allocated for both the words and definitions. 
   
   Follow-Ups:
   1. Code has been ammended such that no memory is being lost, according to Valgrind
   2. A second version of the dictionary has been made using a Linked List. Along with this, I have incoporated a function I used in the first versition, which gets rid of the dashes obtained through user input. {June 16, 2020}
