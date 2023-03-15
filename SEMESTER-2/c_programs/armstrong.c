#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,rem,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    int initial=n;
    while (n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;

    }
    if (initial==sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    
   return 0; 
}