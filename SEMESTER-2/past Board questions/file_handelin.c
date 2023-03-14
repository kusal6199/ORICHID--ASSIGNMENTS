#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("kushal.txt","w");
    if (fptr==NULL)
    {
        printf("error in opening file");
        
    }
    
    fprintf(fptr,"hey I am kushal!! ");
    printf("file written successfully");
    
    return 0;
}