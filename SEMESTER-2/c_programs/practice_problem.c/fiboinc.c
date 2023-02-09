//WAP in C to print the Fibonacci series: 1, 1, 2, 3, 5, 8, 13,…..N.
#include<stdio.h>
void main(){
	int n,i,a=0,b=1,c;
	printf("enter the number of term upto you want: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
    printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}
