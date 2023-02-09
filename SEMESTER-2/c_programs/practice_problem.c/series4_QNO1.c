#include<stdio.h>
void main(){
	int i,j,n;
	printf("enter the last limit munber: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("\neven: \t%d",i);
		}
		else
		{
			printf("\nodd :  \t%d",i);
		}
	}
}
