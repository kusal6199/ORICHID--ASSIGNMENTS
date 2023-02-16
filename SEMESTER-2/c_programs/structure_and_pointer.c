#include<stdio.h>
struct student{
    int roll;
    char name[20];
    int markx;
};
struct student s;

void main(){
    struct student *ptr=&s;
    printf("enter the roll: ");
    scanf("%d",&s.roll);
    printf("the roll no is %d",ptr->roll);
    printf("\nenter the name: ");
    scanf("%s",s.name);
    printf("the name is %s",ptr->name);
    
}