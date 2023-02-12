#include<stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int *ptr,*pptr;
    int a,b;
    printf("enter a and b: ");
    scanf("%d%d",&a,&b);
   
    swap(&a,&b);
    
   
    printf("\na=%d and b=%d",a,b);
}