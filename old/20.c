// function-like macros
#define min(x, y) (x > y ? y : x)

#define max(x, y) ( \
    x < y ? y : x \
)

void main(){
    int a = 10;
    int b = 100;

    int max_num = max(a, b);
}