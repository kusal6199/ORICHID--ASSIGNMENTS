// Write a program that reads integers from the user until a zero is entered
// and calculates the sum of the positive numbers.

#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter the number: ");
    for(i=0; ; i++)
    {
        scanf("%d",&n);
        if (n==0)
        break;
        sum=sum+n;
        
    }
    printf("the sum is %d ", sum );
    
  
}