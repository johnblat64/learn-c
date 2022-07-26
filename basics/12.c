// CONTROL FLOW

#include <stdio.h>

void main(){
    int a = 100;
    int b = 5;

    // if

    if(1){
        printf("it was 1\n");
    }

    if(0){
        printf("I will not be printed\n");
    }

    if(-500){
        printf("I will be printed if any non zero number is in the if statement\n");
    }


    
    if(a > b){
        printf("a is greater than b\n");
    }

    // if else if else
    
    if(a < b){
        printf("a is less than b\n");
    }
    else if(a > b){
        printf("a is greater than b\n");
    }
    else {
        printf("a is equal to b\n");
    }

    // while loop
    
    int current_number = 0;
    int target = 100;
    while(current_number != target){
        current_number += 10;
        printf("current_number: %d\n", current_number);
    }


    // for loop

    for(int i = 0; i < 10; i++){
        printf("i: %d\n", i);
    }

    // do while

    int i = 50;
    do {
        printf("hello from do-while loop\n");
        i++;
    }    
    while(i < 10);

    //      contrast with normal while loop
    while(i < 10){
        printf("hello from normal while loop!\n");
    }


}