// Write a C program to count and display positive, negative, odd, and even numbers in an array.

#include<stdio.h>
void main()
{
    int n,i,po=0,ng=0,odd=0,evn=0;
    printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];

    printf("enter any numbers i.e positive, negative, odd, and even numbers :  ");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (a[i]==0)
        continue;
        else if(a[i]>=0)
        po++;
        else
        ng++;    
    }
    for ( i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        evn++;
        else
        odd++;
     
        
    }
    printf("no.of +ve element = %d\nno.of -ve element = %d\nno.of even element = %d\nno.of odd element = %d\n",po,ng,evn,odd);
    
    
    

}