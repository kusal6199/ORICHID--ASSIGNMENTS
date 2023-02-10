#include<stdio.h>
void main()
{
    int i,n,g,s,temp;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int array[n];
    printf("entr the elements of array: ");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    g=array[0];
    s=array[0];
    for ( i = 1; i < n; i++)
    {
       
       if (array[i]>=g)
       g=array[i];
       if (s>=array[i])
       s=array[i];
    }
    printf("%d IS GRATER and\n%d IS SMALLER",g,s);
    
   
   
    
}