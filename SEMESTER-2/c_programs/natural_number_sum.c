#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number upto which you need the sum: ");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        sum+=i;
    }
    printf("the sum is %d",sum);
    
    return 0;
}