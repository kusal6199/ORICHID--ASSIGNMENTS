// Write a C program to define a structure called &#39;student&#39; that contains the following members:
//  name (string)
//  roll_no (integer)
//  gender (character)
//  marks (float)

// The program should create two variables of type &#39;student&#39; and initialize their values. Then, it
// should print the values of the variables.


#include<stdio.h>
struct student 
{
    char name[20];
    int roll_no;
    char gender[10];
    float marks;
};
void main()
{
    struct student s[2];
    int i;
    printf("enter student details: ");
    for ( i = 0; i < 2; i++)
    {
       printf("\nenter the name, roll no., gender and marks of %dno. student: ",i+1);
       scanf("%s%d%s%f",s[i].name,&s[i].roll_no,s[i].gender,&s[i].marks);
       
    }
    
    for ( i = 0; i < 2; i++)
    {
        printf("\nthe name of %d no. student is %s",i+1,s[i].name);
        printf("\nthe roll no. of %d no. student is %d",i+1,s[i].roll_no);
        printf("\nthe gender of %d no. student is %s",i+1,s[i].gender);
        printf("\nthe marks of %d no. student is %f",i+1,s[i].marks);
        printf("\n");

}

}
