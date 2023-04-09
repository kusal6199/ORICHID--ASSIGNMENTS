#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int i,min,max,n=4;
    ptr=(int*)malloc(n*sizeof(int));
    if (ptr==NULL)
    {
        printf("fail");
    }
    
    printf("enter the numbers\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    max=min=ptr[0];
    for ( i = 0; i < n; i++)
    {
        if (max<=ptr[i])
        {
            max=ptr[i];
        }
        if (min>=ptr[i])
        {
            min=ptr[i];
        }
        
    }
    printf("the max is %d\nmin is %d",max,min);
    free(ptr);
    
    return 0;

}