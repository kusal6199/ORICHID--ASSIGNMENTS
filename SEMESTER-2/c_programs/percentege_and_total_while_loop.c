// Program to find the sum and percentage of the mark of five subjects
// using while loop
#include<stdio.h>
int main()
{
    int i=0,marks;
    int total=0;
    
    while (i<5)
    {
        printf("enter the marks of %d subject out of 100: ",i+1);
        scanf("%d",&marks);
        total=total+marks;
        i++;
        
    }
    
    float percentage=(total/5);
    printf("total=%d\npercentage=%.2f",total,percentage);
    
    
}