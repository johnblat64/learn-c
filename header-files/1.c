// FUNCTION PROTOTYPES
// DECLARING FUNCTION AFTER CALLED

#include <stdio.h>


// a function needs to get declared before it is called

int main(){
    int x = add(5, 10);
}


int add(int a, int b){
    return a + b;
}