#include<stdio.h>
void main()
{
    int n,i,p,q=0;
    printf("enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements: ");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number: ");
    scanf("%d",&p);

    for ( i = 0; i < n; i++)
    {
        if (p==a[i])
        q++;   
    }
    if (q>0)
    printf("yes %d is inside array",p);
    else
    printf("no %d is not inside array",p);

}