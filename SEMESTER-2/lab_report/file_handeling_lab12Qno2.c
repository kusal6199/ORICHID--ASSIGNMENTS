#include<stdio.h>
void main ()
{
    FILE *file;
    file=fopen("example.txt","w");
    // printf("Program Name: C program to write some text 'Welcome to BCA program' in a file example.txt.");
    // printf("\nAuthor:Kushal Kandel");
    if (file==NULL)
    {
     printf("no such file");
     return 1;
    }
    fprintf(file,"welcome to BCA Program\n");
    printf("\nFile written sucessfully");
    fclose(file);
} 