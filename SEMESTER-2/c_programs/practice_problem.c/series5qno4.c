#include<stdio.h>
void main(){
	int i,j,k,n;
	printf("enter the no of column: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
    	for(j=0;j<n-i;j++)
    	{
    		printf(" ");
		}
		for(k=2*n-i;i>=1;k--){
			printf("*");
		}
		printf("\n");
	}
}
