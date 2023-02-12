#include<stdio.h>
void main()
{
    int n,i,max2,max1;
    printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:\n ");
    
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0];
    for ( i = 1; i < n; i++)
    {
        if (a[i]>=max1)
        max1=a[i];   
    }
    for ( i = 1; i < n; i++)
    {
        while (a[i]<max1)
        {
           max2=a[i];
           if (max2>a[i])
           {
            max2=a[i];
           }
            i++;
        }
        
    }
    printf("the second max num. is %d",max2);
}