#include<stdio.h>
int main()
{
    int mat[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,tra[3][3];
    printf("before transopsing the matrix is:\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        printf("%d\t",mat[i][j]);
       }
       printf("\n");
       
    }
    for (size_t i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            tra[i][j]=mat[j][i];
        }
    }
    
    printf("after transopsing the matrix is:\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        printf("%d\t",tra[i][j]);
       }
       printf("\n");
       
    }
    return 0;

}