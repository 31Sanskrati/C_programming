#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[15];
};

int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 46843.5653;
    // e1.name = "Anni" wont work because its not character pointer its an array
    strcpy(e1.name, "Anni");

    printf("%s\n", e1.name);
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);

    struct employee *ptr;
    ptr = &e1;
    printf("%d\n", ptr->code); //(*ptr).code can also be used
    printf("%f\n", ptr->salary);
    printf("%s\n", ptr->name);
    return 0;
}