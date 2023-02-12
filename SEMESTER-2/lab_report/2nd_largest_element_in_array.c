#include<stdio.h>
void main()
{
    int n,i,max2=0,max1=0;
    printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:\n ");
    
    while(n>0)
    {
        scanf("%d",&a[i]);
        if(a[i]>max1)
        {
        	max2=max1;
            max1=a[i];
        }
        if(a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
        }
        n--;
    }
   
    printf("the second max num. is %d",max2);
}