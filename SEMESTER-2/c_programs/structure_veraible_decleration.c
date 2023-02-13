#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float gpa;
};

void main()
{
   struct student s1,s2,s3;
   printf("enter roll. name and gpa of 1st student\n: ");
   scanf("%d%s%f",&s1.roll,s1.name,&s1.gpa);

   printf("\n\nenter roll. name and gpa of 2nd student\n: ");
   scanf("%d%s%f",&s2.roll,s2.name,&s2.gpa);
   
   printf("\nfor first student:\nroll=%d\nname=%s\ngpa=%f",s1.roll,s1.name,s1.gpa);

//    printf("\n\nenter roll. name and gpa of 2nd student\n: ");
//    scanf("%d%s%f",&s2.roll,s2.name,&s2.gpa);
   
   printf("\nfor second student:\nroll=%d\nname=%s\ngpa=%f",s2.roll,s2.name,s2.gpa);
}