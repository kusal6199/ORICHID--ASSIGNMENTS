#include<stdio.h>
struct student
{
    char name[30];
    int marks[3];
};
int main()
{
    int i,j;
    struct student s[2];
    for ( i = 0; i < 2; i++)
    {
        printf("enter %d no. student name:\n",i+1);
        scanf("%s",s[i].name);
        printf("enter the marks in 3 subject:\n");
        for ( j = 0; j < 3; j++)
        {
            
            scanf("%d",&s[i].marks[j]);
        }
        
    }
    return 0;
    
}