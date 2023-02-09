
// Write a program that prints all even numbers from up to 20. [Note: Use
// continue statement)

#include<stdio.h>
void main(){
    int i=0,n;
    printf("enter the no. upto 20 : " );
  
    for ( i = 0; i <= 20; i++)
    {
        scanf("\n%d",&n);
        if (n<0||n>=20)
        {
            continue;
        }
        else if (n%2==0)
        {
            printf("%d is even",n);
        }
        else
        {
             printf("%d is odd",n);
        }
        
        
    }
}




    
    
