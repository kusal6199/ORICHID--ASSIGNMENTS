#include<stdio.h>
void matrixadd(int mat1[3][3],int mat2[3][3]);

int main(){
    int mat1[3][3],mat2[3][3],i,j;
     printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &mat1[i][j]);
    }
  
  printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &mat2[i][j]);
    }
    
    matrixadd(mat1,mat2);



    return 0;
}

void matrixadd(int mat1[3][3],int mat2[3][3]){
    int i,j;
    int sum[3][3];
    for (i = 0; i < 3; i++)
    {
       for(j=0;j<3;j++)
       {
        sum[i][j]=mat1[i][j]+mat2[i][j];
       }
    }
    printf("\nSum of two matrices: \n");
    for (i = 0; i < 3; ++i)
    {
       for (j = 0; j < 3; ++j) {
       printf("%d   ", sum[i][j]);
       if (j == 3-1) {
        printf("\n\n");
      }
    }
    }

    
}