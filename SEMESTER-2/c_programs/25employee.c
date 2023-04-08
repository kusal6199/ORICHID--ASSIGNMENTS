// Write a C program to enter id, name, and address of 25 employees into structure variable called
// employee and sort them in ascending order on the basis of their name with use of pointer.

#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    char address[30];
};
int main()
{
    int i,j;
    struct employee e[3];
    struct employee *ptr[3];
    for ( i = 0; i < 3; i++)
    {
        ptr[i]=&e[i];
    }
    
    for ( i = 0; i < 3; i++)
    {
        printf("enter %d no. employee detils:\n",i+1);
        printf("enter name: ");
        scanf("%s",ptr[i]->name);
        printf("enter adddress: ");
        scanf("%s",ptr[i]->address);
        printf("enter id: ");
        scanf("%d",&ptr[i]->id);
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = i+1; j < 3; j++)
        {
            if (strcmp(ptr[i]->name,(*ptr[j]).name)>0)
            {
                struct employee temp= *ptr[i];
                *ptr[i]=*ptr[j];
                *ptr[j]=temp;

            }
            
        }
        
    }
    printf("deteils of employee in alphabitical order:\n");
    for ( i = 0; i < 3; i++)
    {
       printf("%d employee:\n",i+1);
       printf("Name:%s\n",ptr[i]->name);
       printf("Address:%s\n",ptr[i]->address);
       printf("Id:%d\n",ptr[i]->id);
       printf("\n");
    }
    return 0;
}