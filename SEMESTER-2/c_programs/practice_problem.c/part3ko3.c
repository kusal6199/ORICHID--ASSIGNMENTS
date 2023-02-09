#include<stdio.h>
void main(){
	int a,b,i,j;
	printf("enter upper limit and lower limit numbers: ");
	scanf("%d%d",&a,&b);
	
	for(i=a;i<=b;i++)
	{
		int c=0;
    	int n;
//		a++;
		for(j=2;j<=n;j++)
		{
			if(j%i==0)
			{
				c++;
			}
		}
		if(c==2){
			printf("%d is prime",j);
		}
	}
}
