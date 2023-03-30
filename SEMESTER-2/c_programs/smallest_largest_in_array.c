#include<stdio.h>
int main()
{
    int n;
    printf("enter array size: ");
    scanf("%d",&n);
    int arr[n],i;
    printf("enter array elements: ");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    for ( i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }

        if (arr[i]<min)
        {
            min=arr[i];
        }
        
        
    }
    printf("%d is max element and\n%d is main element",max,min);
    return 0;
    

}