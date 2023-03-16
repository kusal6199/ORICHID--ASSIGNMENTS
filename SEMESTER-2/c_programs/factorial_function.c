#include<stdio.h>
void fact(int a);
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    fact(a);
    return 0;
}

void fact(int a)
{
    int i,fact=1;
    for ( i = 1; i <= a; i++)
    {
        fact=fact*i;
    }
    printf("the factorial of number is %d",fact);
}