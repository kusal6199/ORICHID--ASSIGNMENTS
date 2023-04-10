// Write a C program to copy contents of bca.txt file into another file called info.txt.
#include<stdio.h>
int main()
{
    FILE *file1;
    file1=fopen("bca.txt","r");
    if (file1==NULL)
    {
        printf("error");
        return 1;
    }

    FILE *file2;
    file2=fopen("info.txt","w");
    if (file2==NULL)
    {
        printf("error");
        return 1;
    }
    char ch;
    while ((ch = fgetc(file1)) != EOF) 
    {
        fputc(ch, file2);
    }
    fclose(file1);
    fclose(file2);

    printf("content copied successfully");
    return 0;

}