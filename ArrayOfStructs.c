#include <stdio.h>
struct employee
{
    char name[20];
    char position[20];
    int salary;
};
int main ()
{
    struct employee e1 ={"preet", "A", 20000000};
    struct employee e2 ={"hasbula", "B", 10000000};
    struct employee e3 ={"bro", "C", 20};

    struct employee employees[3] = {e1,e2,e3};
    for(int i=0; i<3; i++)
    {
        printf("name:%s\n", employees[i].name);
        printf("position:%s\n", employees[i].position);
        printf("salary:%d\n", employees[i].salary);
        printf("\n\n");
    }
}