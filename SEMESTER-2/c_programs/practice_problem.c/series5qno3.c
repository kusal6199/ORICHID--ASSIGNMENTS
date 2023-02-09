#include<stdio.h>
void main(){
	int i,j,k,n;
	printf("enter the no. of rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
//		space=space-i;
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
