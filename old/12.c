// pointers and arrays


void main(){
    float array_of_floats[5];

    // fill in array
    for(int i = 0; i < 5; i++){
        array_of_floats[i] = i + 0.5;
    };


    float *ptr_of_floats = array_of_floats;

    printf("ptr_of_floats = %f \n", *ptr_of_floats);
    
    printf("ptr_of_floats = %f \n", ptr_of_floats[0]);



}