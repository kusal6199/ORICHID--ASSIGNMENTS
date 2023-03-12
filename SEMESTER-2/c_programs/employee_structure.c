// Write a C program to enter id, name, and address of 25 employees into structure variable called
// employee and sort them in ascending order on the basis of their name with use of pointer.

#include<stdio.h>
#include<string.h>
struct employee
{
    char name[30];
    int id;
    char address[30];
};

int main()
{
    int i,j;
    struct employee *temp;
    struct employee e[3];
    struct employee *ptr[3];
    printf("enter employee details:\n");
    for ( i = 0; i < 3; i++)
    {
        ptr[i]=&e[i];
        printf("enter name of %dno. employee: ",i+1);
        scanf("%s",ptr[i]->name);
        printf("enter id of %dno. employee: ",i+1);
        scanf("%d",&ptr[i]->id);
        printf("enter address of %dno. employee: ",i+1);
        scanf("%s",ptr[i]->address);
    }
    printf("details of employ on Alphabatical order:\n");
    for ( i = 0; i < 3-1; i++)
    {
       for ( j = 0; j < 3-1-i; j++)
       {
        if (strcmp(ptr[j]->name,ptr[j+1]->name)>0)
        {
            temp=ptr[j];
            ptr[j]=ptr[j+1];
            ptr[j+1]=temp;
        }
       } 
    }

    for ( i = 0; i < 3; i++)
    {
        printf("details of %dno. employee:\n",i+1);
        printf("name: %s",ptr[i]->name);
        printf("\nid: %d",ptr[i]->id);
        printf("\naddress: %s",ptr[i]->address);
        printf("\n");  
    }
    return 0;
}