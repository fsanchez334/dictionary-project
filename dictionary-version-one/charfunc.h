#ifndef _CHARFUNC_H_
#define _CHARFUNC_H_


char *maker_function(int length){
     char *holder = (char *) malloc(length);
     return holder;
}
char *delimeterFunction(char *define){
    char dash = '-';
    int string_len = strlen(define);
    for(int i = 0; i < string_len; i++){
        if(define[i] == '-'){
            define[i] = ' ';
        }
    }
    return define;
}

#endif /* #ifndef _CHARFUNC_H_ */

