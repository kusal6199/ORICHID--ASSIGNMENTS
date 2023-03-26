#include<stdio.h>
void bubble(int a[],int n);
int main()
{
    int n;
    printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];
    int i,j;
    printf("enter array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,n);
    return 0;
}
void bubble(int a[],int n)
{
    int i,j;
    for ( i = 0; i < n-1; i++)
    {
        for ( j= 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    printf("the sorted array is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}