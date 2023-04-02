#include<stdio.h>
int main()
{
    int i,j,k;
    int mat1[3][3],mat2[3][3],mul[3][3],s=0;
    printf("enter first matrix elements:\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j= 0; j < 3; j++)
       {
         scanf("%d",&mat1[i][j]);
       }
       
    }
    printf("enter second matrix elements:\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j= 0; j < 3; j++)
       {
         scanf("%d",&mat2[i][j]);
       }
       
    }
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j< 3; j++)
        {
            s=0;
            for ( k = 0; k < 3; k++)
            {
                s=s+mat1[i][k]*mat2[k][j];
            }
            mul[i][j]=s;
            
        }
        
    }
    printf("the matrix multiple is:\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)
       {
          printf("%d\t",mul[i][j]);
       }
       printf("\n");
    }
    
    
    return 0;
}