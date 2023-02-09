ra#include<stdio.h>
void main(){
	int i=1,n;
	float sum=0.0;
	printf("enter the last limit: ");
	scanf("%d",&n);
	while(i<=n)
	{
//		a=a/i;
//		printf("%d+\t",a);
//		a=a+a/i;
        sum=sum+(1.0/i);
        printf("%.2f+\t",sum);
//        a=1/(i++);
		i++;
		
	}
	printf("\nthe sum is %f",sum);

}
