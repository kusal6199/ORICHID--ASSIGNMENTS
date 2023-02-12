#include<stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    // int *ptr,*pptr;
    int c,d;
    printf("enter a and b: ");
    scanf("%d%d",&c,&d);
   
    swap(&c,&d);
    
   
    printf("\na=%d and b=%d",c,d);
}