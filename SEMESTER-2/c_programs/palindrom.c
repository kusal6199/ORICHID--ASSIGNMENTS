#include<stdio.h>
int main()
{
    int n,i,rem,b=0,initial;
    
    printf("enter the number: ");
    scanf("%d",&n);
    initial=n;
    while (n>0)
    {
        rem=n%10;
        b=b*10+rem;
        n=n/10;
    }
    if (initial==b)
        printf("yes");

    else
       printf("no");
    return 0;
}