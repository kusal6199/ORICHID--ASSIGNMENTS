#include<stdio.h>
void main(){
    int *ptr,*pptr;
    int a=10;
    ptr =&a;
    pptr=&ptr;
    printf("the value of a is: %d",*ptr);
    printf("\nthe value of ptr is: %d",*pptr);
    printf("\nthe address of ptr is: %d",&pptr);
    printf("\nthe address of pptr is: %d",&pptr);
}