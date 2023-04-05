// Program in C to calculate the sum and average of array elements by passing to a function.

#include<stdio.h>
void sum(int a[],int n);

void sum(int a[],int n)
{
    int i,su=0;
    float avr;
    for ( i = 0; i < n; i++)
    {
        su+=a[i];
        
    }
    avr=su/n;
    printf("the sum is %d",su);
    printf("\nthe avrage is %f",avr);
}

int main()
{
    int n,i;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,n);
    
    return 0;

}
