#include<stdio.h>
void main(){
    int *ptr[5];
    int a[5]={9,8,6,7,5},i;
    printf("Program Name: Program in C to illustrate the use of array of pointer.");
    printf("\nAuthor: Kusal Kadel");
    for ( i = 0; i < 5; i++)
    {
        ptr[i]=&a[i];
    }
    for ( i = 0; i < 5; i++)
    {
       printf("\nvalue of %d position pointer: %d",i+1,*ptr[i]);
    }
    
}