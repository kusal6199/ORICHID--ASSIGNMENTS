#include<stdio.h>
struct marks
{
    int math;
    int nepali;
    int social;

};

struct student
{
   int roll;
   char name[20];
   struct marks m[3];

};
int main()
{
    struct student s[3];
    int i,j;
    printf("enter the student detais:\n");
    for ( i = 0; i < 3; i++)
    {
        printf("enter the name: ");
        scanf("%s",s[i].name);
        printf("enter the roll: ");
        scanf("%d",&s[i].roll);
        // for ( j = 0; j < 3; j++)
        // {
            printf("enter marks of math: ");
            scanf("%d",&s[i].m[i].math);
            printf("enter marks of nepali: ");
            scanf("%d",&s[i].m[i].nepali);
            printf("enter marks of social: ");
            scanf("%d",&s[i].m[i].social);
        // }
        

    }
    

}
