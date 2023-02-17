#include<stdio.h>
struct student
{
   int age;
   char name[10];
  
};

void print_structure(struct student []);


void main()
{
struct student s[4];
int age;
char name[10];
print_structure (s);



}

void print_structure(struct student s[4]){
    int i;
    for ( i = 0; i < 4; i++)
    {
        printf("enter age: ");
        scanf("%d",&s[i].age);
        printf("enter name: ");
        scanf("%s",s[i].name);
        printf("age = %d\nname=%s\n",s[i].age,s[i].name);
    }
    printf("\n");
    
}