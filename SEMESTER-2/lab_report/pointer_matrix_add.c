#include<stdio.h>
void main()
{
    int mat1[2][2]={{1,2},{3,4}}, mat2[2][2]={{5,6},{7,8}},i,j;
    int *ptr1[2][2],*ptr2[2][2],sum[2][2];
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            ptr1[i][j]=&mat1[i][j];
            ptr2[i][j]=&mat2[i][j];

            sum[i][j]=*ptr1[i][j]+*ptr2[i][j];
        }
        
    }
    printf("the sum is :\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d  ",sum[i][j]);
            if (j ==2 - 1)
            {
               printf("\n\n");
            }
            
        }
        
    }
    
    
    

}