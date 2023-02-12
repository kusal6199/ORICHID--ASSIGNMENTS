#include<stdio.h>
void main()
{
    int i,n,g,s,temp;
    printf("Program Name: Find grater and lest element inside array");
    printf("\nProgram Author: Kushal Kadel");
    printf("\nenter the size of array: ");
    scanf("%d",&n);
    int array[n];
    printf("entr the elements of array:\n");

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
