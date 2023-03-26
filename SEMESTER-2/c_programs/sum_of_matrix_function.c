#include<stdio.h>
void matrixadd(int mat1[3][3], int mat2[3][3]);
void matrixadd(int mat1[3][3], int mat2[3][3])
{
    int sum[3][3];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
        sum[i][j]=mat1[i][j]+mat2[i][j];
        }
        
    }
    printf("the sum of matrix is: ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",sum[i][j]);

        }
        
    }
    
    
}
int main()
{
    int mat1[3][3],mat2[3][3],i,j;
    printf("enter element of 1st matrix ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
        
    }
    printf("\n");
   
    printf("enter element of 2nd matrix ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
        
    }
    matrixadd(mat1,mat2);
}