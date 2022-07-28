// another way to typedef a struct

typedef struct EmployeeRecord {
    char name[64];
    unsigned int employee_id;
} EmployeeRecord;


void main(){
    EmployeeRecord employee = {
        "joe bag",
        123456
    };

    printf("employee name = %s id = %u\n", employee.name, employee.employee_id);
}