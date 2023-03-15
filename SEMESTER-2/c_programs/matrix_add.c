#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("enter the row and column size: ");
    scanf("%d%d",&r,&c);
    int mat1[r][c],mat2[r][c],sum[r][c];
    printf("enter 1st matrix details:\n");
    for ( i = 0; i < r; i++)
    {
        for(j=0;j<c;j++)
        {
          printf("enter a[%d][%d] element: ",i+1,j+1);
          scanf("%d",&mat1[i][j]);
        }
    }

    printf("enter 2nd matrix details:\n");
    for ( i = 0; i < r; i++)
    {
        for(j=0;j<c;j++)
        {
          printf("enter a[%d][%d] element: ",i+1,j+1);
          scanf("%d",&mat2[i][j]);
        }
    }

    for ( i = 0; i < r; i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    
    printf("the sum of matrix:\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        printf("%d\t",sum[i][j]);
       }
       printf("\n");
       
    }
    

    return 0;

}