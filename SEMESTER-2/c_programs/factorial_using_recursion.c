#include<stdio.h>
int fact(int n);
int fact(int n)
{
    
     if(n==0||n==1)
     return 1;
     else
     return n*fact(n-1);
    
    
   
}
int main()
{
    int n,i,j;
    printf("enter a number: ");
    scanf("%d",&n);
    int a=fact(n);
    printf("the factorial is %d",a);

 return 0;
}