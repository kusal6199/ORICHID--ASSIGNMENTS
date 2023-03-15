#include<stdio.h>
int main()
{
    int i=1,fact=1,n;
    printf("enter number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("FACTORIAL=%d",fact);
    return 0;
}