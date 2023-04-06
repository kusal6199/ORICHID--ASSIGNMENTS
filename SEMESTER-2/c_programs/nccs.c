//  Write a program to write “I study at NCCS” in file
// “college.txt”.

#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("college.txt","w");
    if (file==NULL)
    {
        printf("error");
        return 1;
    }
    char ch[50]="I study at NCCS";
    fprintf(file,"%s",ch);
    printf("written successfully");
    fclose(file);
    return 0;
    
}