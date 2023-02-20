#include<stdio.h>
void main(){
    int a[5]={1,2,3,4,5};
    int *ptr[5];
    int sum =0,i;

    for ( i = 0; i < 5; i++)
    {
       ptr[i]=&a[i];
       sum=sum+*ptr[i];
       
    }
    printf("the sum is %d",sum);
    

}