// 1. Write a program to display the following pyramids:

// A
// B C
// D E F
// G H I J

#include<stdio.h>
int main()
{
    int i,j;
    char first='A';
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            printf("%c ",first);
        }
        printf("\n");
        first++;
        
    }
    
return 0;
}