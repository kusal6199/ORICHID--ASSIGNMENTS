#include<stdio.h>
int sum (int a, int b);
int main()
{
    int a,b;
    printf("enter the numbers: ");
    scanf("%d%d",&a,&b);
    // int sum = c;
    printf("the sum is %d",sum(a,b));
    return 0;
}
int sum(int a, int b)
{
    int c = a+b;
    return c;
}