// Write a C program using structure that reads the record of 35
// students with member’s roll, name, address and makes and display the records of students who
// have obtained greater than 250 marks

#include<stdio.h>
struct marks
{
    int math;
    int nepali;
    int science;
    int social;
};

struct student
{
    char name[30];
    int roll;
    // int marks;
    struct marks m[4];
};
int main()
{
    int i,j,total;
    struct student s[4];
    for ( i = 0; i < 4; i++)
    {
        printf("enter %dno. student details",i+1);
        printf("\nname: ");
        scanf("%s",s[i].name);
        printf("roll: ");
        scanf("%d",&s[i].roll);

        for ( j= i; j <=i; j++)
        {
           printf("marks of math: ");
           scanf("%d",&s[i].m[i].math);
           printf("marks of nepali: ");
           scanf("%d",&s[i].m[i].nepali);
           printf("marks of science: ");
           scanf("%d",&s[i].m[i].science);
           printf("marks of social: ");
           scanf("%d",&s[i].m[i].social);

        }
        
    }
    

    printf("\n\nStudents who obtained greater than 250 marks in total:\n");
    printf("Name\tRoll No.\tTotal Marks\n");
    for ( i = 0; i < 4; i++)
    {
        total=0;
        for ( j= 0; j <4; j++)
        {
            total+= s[i].m[i].math+s[i].m[i].nepali+s[i].m[i].science+s[i].m[i].social;
        }
        if (total>300)
        {
            printf("%s\t%d\t\t%d\n",s[i].name,s[i].roll,total);
        }
        
        
    }
    
    
    return 0;
}