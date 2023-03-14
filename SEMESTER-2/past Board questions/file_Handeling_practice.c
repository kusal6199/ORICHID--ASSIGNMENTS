// Program in C to store id, name and salary of the employee.

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("practice.txt","w");
    if (fptr==NULL)
    {
        printf("error");
    }
    fprintf(fptr,"name = Ram\tid = 12\tsalary = 14000");
    printf("file has been created");
    

    return 0;
}