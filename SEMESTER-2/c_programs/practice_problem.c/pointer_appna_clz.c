#include<stdio.h>
int main(){
	int x;
	int *ptr;
	ptr=&x;
//	printf("%d",ptr);
    *ptr=0;  
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);

    *ptr=*ptr+5;
    printf("x=%d\n",x);
    (*ptr)++;
    printf("*ptr=%d\n",*ptr);
    return 100;
}



