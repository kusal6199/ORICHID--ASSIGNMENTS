#include<stdio.h>
struct student
{
   int roll;
   char name[10];
   int age;
};

void structure(int roll, char name[10],int age);

void main(){
    int roll;
    char name[10];
    int age;
    structure(roll,name,age);


}

void structure(int roll, char name[10],int age)
{
    printf("enter roll: ");
    scanf("%d",&roll);
    printf("the roll is: %d",roll);
    printf("\nenter name: ");
    scanf("%s",name);
    printf("the name is: %s",name);
    printf("\nenter age: ");
    scanf("%d",&age);
    printf("the age is: %d",age);
    

}