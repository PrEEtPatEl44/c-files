#include <stdio.h>
#include <string.h>
typedef char b[50];
typedef struct 
{
char name[10];
char id[10];
int age;
int grades[4];
}a;
int main()
{
b typedefarray ={'r', '$', '%'};
for(int i=0; i<3; i++)
{
    printf("symbol[%d]:%c\n", i, typedefarray[i]);
}
a student1 = {"preet", "096876", 34, {9,16,31,94}};
printf("\n\n\n\nname:%s\n", student1.name);
printf("id:%s\n", student1.id);
printf("age:%d\n", student1.age);
for(int i=0; i<4; i++)
{
    printf("grade[%d]:%d\n", i, student1.grades);
}
return 0;
}
// typedef is a reserved keyword that gives an existing data type a nickname specially used for structs