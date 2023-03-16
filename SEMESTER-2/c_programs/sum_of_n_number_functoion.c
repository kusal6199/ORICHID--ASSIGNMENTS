#include<stdio.h>
int add(int n);
int main(){
    int x;
    printf("the ans is %d",add(x));

    return 0;
}
int add(int x)
{
    int p,i,sum=0;
    printf("enter limiting value of n (1 to 9): ");
    scanf("%d",&p);
    for ( i = 0; i <=p; i++)
    {
        sum+=i;
    }
    return sum;
    
}