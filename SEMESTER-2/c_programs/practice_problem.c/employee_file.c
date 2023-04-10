#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int id,salary;
    printf("enter the name, id and salary of employee:\n");
    scanf("%s%d%d",name,&id,&salary);
    file=fopen("mausam.txt","w");
    if (file==NULL)
    {
        printf("error");
        return 1;

    }
    fprintf(file,"Name:%s\nId:%d\nSalary:%d",name,id,salary);
    printf("done");
    fclose(file);
    return 0;
      
}