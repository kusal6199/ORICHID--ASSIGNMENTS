#include<stdio.h>
void main(){
	int a=5,n,i;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\t+",a);
		a=a+(i*5);
//		printf("%d",a);
	}
	printf("\nthe sum is %d",a);
}
