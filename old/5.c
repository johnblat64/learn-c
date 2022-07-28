// character arrays are strings

#include "stdio.h"

int main(){
    const int arrayLength = 6;

    // For loop

    char array[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    for(int i = 0; i < arrayLength; i++){
        printf("%c", array[i]);
    }
    printf("\n");

    
    // while loop
    char array2[] = "good morning";

    int i = 0;
    while(array2[i] != '\0'){
        printf("%c", array2[i]);
        i++;
    }
    printf("\n");

    // just print it out
    printf("%s\n", array);


    return 0;
}