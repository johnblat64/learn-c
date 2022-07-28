// typedeffing structs

typedef struct employee_record_t employee_record_t;

struct employee_record_t {
    char name[64];
    unsigned int employee_id;
};

int main(){
    employee_record_t employee = {
        "joe bag",
        123456
    };

    printf("employee name = %s id = %u\n", employee.name, employee.employee_id);

    return 0;
}