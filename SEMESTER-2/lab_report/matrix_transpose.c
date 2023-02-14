#include<stdio.h>
void main() {
     int i,j,m,n;
    printf("Prgram Name: Matrix transpose\n");
    printf("Author: Kushal Kandel");
    printf("\nenter the size of array enter for row: ");
    scanf("%d",&m);
    printf("enter the size of array enter for column: ");
    scanf("%d",&n);
    int real[m][n], tns[n][m];
    printf("\nenter the elements of first matrix:\n ");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j< n; j++)
        {
            scanf("%d",&real[i][j]);
        }
    
    }
    printf("\nbefore transposing the matrix is: \n");
    for ( i = 0; i< m; i++)
    {
        for ( j = 0; j < m; j++)
        {
           printf("\t%d",real[i][j]);
           
        }
        printf("\n");
        
    }

    printf("\nafter transposing the matrix is:\n ");


    for ( j = 0; j< n; j++)
    {
        for ( i = 0; i< m; i++)
        {
            tns[j][i]=real[i][j];
            printf("\t%d",tns[j][i]);
            //  printf("\t%d",tns[j][i]);

        }
        printf("\n");
        
    }
    

    
}