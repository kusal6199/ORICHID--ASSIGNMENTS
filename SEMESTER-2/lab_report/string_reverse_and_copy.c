#include<stdio.h>
#include<string.h>
void main(){
    char a[20],i,j;
    char b[20];
    printf("Prgram Name: reverse a string and copy into next string\n");
    printf("Author: Kushal Kandel");
    
    printf("\nenter string: ");
    scanf("%s",a);
    printf("before reverse: %s",a);
    strrev(a);
    strcpy(b,a);
    
    printf("\nafter reverse %s",b);
}