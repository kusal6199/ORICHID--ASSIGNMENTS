#include<stdio.h>
struct birthday
{
    int day;
    int month;
    int year;
};
struct student
{
    int roll;
    char name[20];
    struct birthday dob[2];
};
int main()
{
    struct student s[2];
    int i,j;
    for ( i = 0; i < 2; i++)
    {
        printf("enter %d no. student details:\n",i=1);
        printf("enter name: ");
        scanf("%s",s[i].name);
        printf("enter roll: ");
        scanf("%d",&s[i].roll);
        printf("enter dob in day/month/year formate: ");
        scanf("%d/%d/%d",&s[i].dob[i].day,&s[i].dob[i].month,&s[i].dob[i].year);
    }
    return 0;
}
