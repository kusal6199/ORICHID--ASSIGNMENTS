// WAP in C to Print the series of odd and even numbers separately up to N.
#include<stdio.h>
void main(){
    int n,i,j;
    printf("enter the number upto you want to print: ");
    scanf("%d",&n);
    printf("the even number are: ");
    for ( i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            printf("\n%d",i);
        }
        
    }
    printf("\nthe even number are: ");
    for ( i = 0; i < n; i++)
    {
        if (i%2!=0)
        {
            printf("\n%d",i);
        }
        
    }
    
}
