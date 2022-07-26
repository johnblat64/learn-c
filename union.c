struct myStruct {
    union {
        float f;
        int i;
    } number;
};

union {
    float f;
    int i;
} whatever;

void main(){
    whatever.f = 4.0;

}