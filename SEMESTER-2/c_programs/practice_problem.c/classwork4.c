#include<stdio.h>
void main()
{
	int n,i,j,sum,a=0;
	printf("enter last limit: ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		printf("\n%d",a);
		a=a+i;
		printf("\n%d\t+");
	}
	printf("\nthe final sum is %d",a);
}
