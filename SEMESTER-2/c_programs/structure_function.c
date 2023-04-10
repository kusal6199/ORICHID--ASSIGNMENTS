#include<stdio.h>
struct student
{
    char name[20];
    int roll;
};
void printt(struct student s[3]);

void printt(struct student s[3])
{
    int i;
    for ( i = 0; i < 3; i++)
    {
    printf("enter %d no. student details:\n",i+1);
    printf("enter name: ");
    scanf("%s",s[i].name);
    printf("enter roll no.: ");
    scanf("%d",&s[i].roll);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("details of %d no. student:\n",i+1);
        printf("name: %s",s[i].name);
        printf("roll: %d",s[i].roll);
        printf("\n");
    }
}
int main()
{
    
    struct student s[3];
    printt(s);
    return 0;
}