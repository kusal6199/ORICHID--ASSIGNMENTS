#include<stdio.h>
void main(){
	int num=10,*ptr1,*ptr2;
	ptr1=&num;
	ptr2=&*ptr1;
	printf("%d",*ptr2);
	
}

