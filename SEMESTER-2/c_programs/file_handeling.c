#include<stdio.h>
int main()
{
    FILE *file;
    
    file=fopen("abc.txt","w");
    if (file==NULL)
    {
        printf("error opening file");
        return 1;
    }
    char str[20]="I love me";
    fputs(str,file);
    fputs("\nI also love you",file);
    
    fclose(file);
    printf("file written successfully");
    
    return 0;
}