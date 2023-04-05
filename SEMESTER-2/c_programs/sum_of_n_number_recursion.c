#include<stdio.h>
int sum(int n);
int sum(int n)
{
    if(n==1)
    return n;

    else
    return n+sum(n-1);
}
int main()
{
    int n;
    printf("enter upto which natural number sum you want: ");
    scanf("%d",&n);
    int a=sum(n);
    printf("the sum is %d",a);
    return 0;

}