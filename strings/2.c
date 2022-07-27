// C STYLE STRING
// CHARACTER ARRAYS

#include <stdio.h>

// can take an array of max size 64

int size_of_string(char array[64]){
    int current_index = 0;
    int current_character = array[current_index];
    
    while(current_character != '\0'){
        current_character = array[current_index];
        current_index++;
    }
    return current_index - 1 ;

}

void main(){

    
    char *char_array_string = "hello";

    int size = size_of_string(char_array_string);

    printf("size: %d\n", size);


    char char_array_2[] = "hello";
    int size2 = size_of_string(char_array_2);

    printf("size2: %d\n", size2);




}