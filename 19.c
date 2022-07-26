// macro - redefine function name

int calculate_library_sum(int x, int y){
    return x + y;
}

#define cl_sum calculate_library_sum


void unix_open_socket(int whatever, int blah){
    // code
}

void win32_open_socket(int whatever, int blah){
    // code
}

#ifdef MSVC

#define open_socket win32_open_socket

#else 
#define open_socket unix_open_socket

#endif


void main(){
    int result = cl_sum(5, 10);
}