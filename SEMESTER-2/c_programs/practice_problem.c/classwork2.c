#include<stdio.h>
#include<math.h>
void main(){
	int i,j,res;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<10;j++)
		{
//			res=i*j;
			printf("%d*%d=%d\t",j,i,i*j);
		}
		printf("\n");
	}
}
