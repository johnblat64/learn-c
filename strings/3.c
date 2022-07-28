//
// STRING UTILS
//

#include <stdio.h>
#include <string.h>

int main()
{
    char *first_name = "Steve";
    char *last_name = "Martin";

    char *fullname;

    size_t first_name_str_len = strlen(first_name);

    strncpy(fullname, first_name, first_name_str_len);

    strncat(fullname, last_name, strlen(last_name));

    int strings_equal = strncmp(first_name, last_name, first_name_str_len);

    printf("strings_equal: %d\n", strings_equal);

    

}