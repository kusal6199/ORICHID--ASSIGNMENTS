#include<stdio.h>

void main(){
    int a[5]={1,2,9,10,7};
    int user,i;
    printf("Enter value to search");
    scanf("%d",&user);
    for ( i = 0; i <5; i++)
    {
        if (user==a[i])
        {
            printf("YES");
            break;
        }
        
        
    }
    
}