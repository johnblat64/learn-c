// loops

#include <stdio.h>

void main(){

    const int SOME_ARRAY_LENGTH = 10;
    int some_array[SOME_ARRAY_LENGTH];

    for(int i = 0; i < SOME_ARRAY_LENGTH; i++){
        some_array[i] = i*i;
    }

    int i = 0;
    while(i < SOME_ARRAY_LENGTH){
        printf("%d\n", some_array[i]);
        i++;
    }
}