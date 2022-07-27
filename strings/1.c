#include <stdio.h>
#include <malloc.h>

int main()
{
    // c-strings are character arrays end in a null character 
    //
    //  
    char name0[] = {'M', 'A', 'R', 'K', '\0'};
    char *name1  = "Steve Dave";
    char name2[] = "Joe Donuts";
    char name3[9] = "John Doe\0";


    char *name4 = malloc(sizeof(char) * 16); 
    
}