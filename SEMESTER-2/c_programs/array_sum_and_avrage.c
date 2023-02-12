// Program in C to find sum and average of first n numbers using array.

#include<stdio.h>

void main()
{
    float avr,sum=0.0;
    int n,i;
 
    printf("Program Name: Sum and Avrage of array");
    printf("\nAuthor: Kushal Kandel");
    
    
    printf("\nenter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the number of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    avr=sum/n;
    printf("sum=%.2f and\navrage =%.2f",sum,avr);
    
}
