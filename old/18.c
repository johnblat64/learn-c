// macros - conditionals for platform specific code
#ifdef WIN32

    #include <windows.h>

#elif defined(__unix__)

    #include <unistd.h>
    #include <stdlib.h>

#endif

#include <stdio.h>

// one example would be using directX on windows or openGL on linux for graphics
// another example might be for file i/o operations

void main(){
    #ifdef WIN32
        // windows specific code
    #elif defined(__unix__)
        // unix specific code
    #endif
    // platform indpendent code
}