#include<stdio.h>
void main(){
	int i,n,j,k;
//	char ch='*';
    printf("enter the no of column: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    	for(j=i;j<n;j++)
    	{
    		printf(" ");
		}
		for(k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
