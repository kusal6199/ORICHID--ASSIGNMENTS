#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
    char address[50];
};
void main(){
    int i,j;
    struct employee s[25],temp,*ptr[3];
    printf("enter the employee details: ");
    for ( i = 0; i < 25; i++)
    {
        printf("\nenter %dno. employee id: ",i+1);
        scanf("%d",&s[i].id);
        printf("enter %dno. employee name: ",i+1);
        scanf("%s",&s[i].name);
        printf("enter %dno. employee adress: ",i+1);
        scanf("%s",&s[i].address);
    }
    for ( i = 0; i < 25; i++)
    {
        ptr[i]=&s[i];
    }
    for ( i = 0; i < 25; i++)
    {
    for ( j= i+1; j < 25; j++)
    {  
       if (strcmp((*ptr)[i].name,(*ptr)[j].name)>0)
       {
        temp = *ptr[i];
        *ptr[i] = *ptr[j];
        *ptr[j] = temp;
       }
    }
}
printf("the details of employee after sorting in ascending order on the basis of their name: \n");
for ( i = 0; i < 25; i++)
{
   printf("%d\t%s\t%s",s[i].id,s[i].name,s[i].address);
}
printf("\n");
}
