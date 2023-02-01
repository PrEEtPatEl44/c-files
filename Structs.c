#include <stdio.h>
#include <string.h>
struct student
{
    char name[10];
    char id[15];
    int age;
    int marks[4];
};

void PrintStudent(struct student)
{

}
int main()
{
  struct student student1;
  strcpy(student1.name, "preet");
  strcpy(student1.id, "000123748932");
  student1.age = 34;
  student1.marks[0]=98;
  student1.marks[1]=77;
  student1.marks[2]=87;
  student1.marks[3]=9;
  printf("\n\n\nname:%s\n", student1.name);
  printf("id:%s\n", student1.id);
  printf("age:%d\n", student1.age);
  for(int i=0; i<4; i++)
  {
  printf("grade[%d]:%d\n", i, student1.marks[i]);
  }
  
  struct student student2 = {"hh", "0125642343", 45, {99,9,6,3}};


  printf("\n\nname:%s\n", student2.name);
  printf("id:%s\n", student2.id);
  printf("age:%d\n", student2.age);
  for(int i=0; i<4; i++)
  {
  printf("grade[%d]:%d\n", i, student2.marks[i]);
  }
  return 0;
}
// struct = collection of related members ("variables") 
   //          they can be of different data types
   //          listed under one name in a block of memory
   //          VERY SIMILAR to classes in other languages (but no methods)
