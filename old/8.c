// structs

struct point_t {
    float x;
    float y;
};

int main(){
    struct point_t point_origin;
    point_origin.x = 0.0f;
    point_origin.y = 0.0f;

    struct point_t point_idk = {15.5f, 33.33f};

    printf("point x = %f y = %f\n", point_idk.x, point_idk.y);

    return 0;
}