// Program in C to find sum and average of first n numbers using array.

#include<stdio.h>

void main()
{
    float avr,sum=0.0;
    int n,i;
    int a[n];
    printf("program title: Sum and avrage of array");
    printf("\nProgram Author: Kushal Kandel");
    
    printf("\nenter the number limit: ");
    scanf("%d",&n);
    printf("enter the number of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    avr=sum/n;
    printf("sum=%.2f and\navrage =%.2f",sum,avr);
    
}
