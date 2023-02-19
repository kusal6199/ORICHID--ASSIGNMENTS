#include<stdio.h>
void main()
{
    int *ptr1,*ptr2;
    int a,b,sum;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;
    printf("\nthe sum is %d",sum);

}