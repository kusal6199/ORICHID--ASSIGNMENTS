//WAP in C to print the sum of 9+99+999+...............n terms.
#include<stdio.h>
void main(){
	int a=0,i,n,b=9,c=0;
	printf("no. of terms you want: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	a=a+b;
	printf("%d\t+",b);
	b=b*10+9;
	}
	printf("\nThe sum of the series = %d \n",a);
}
