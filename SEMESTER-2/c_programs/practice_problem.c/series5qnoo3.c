#include<stdio.h>
void main()
{
	int i,j,k,a,n;
	printf("enter the no of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<(2*i-1);k++)
		{
			if(k<i)
			{
				printf("%d",k);
			}
			else if(k==i)
			{
				printf("%d",k);
				a=k;
			}
			else
			printf("%d",--a);
			}
		}
		printf("\n");
	}
	

