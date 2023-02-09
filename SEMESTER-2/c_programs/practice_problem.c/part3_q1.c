//WAP in C to print all the ASCII values and their equivalent
//characters using a while loop. The ASCII values vary from 0 to 255.

#include<stdio.h>
void main(){
	char ch;
	int i=0;

	while(i<=255){
		printf("%c=%d\n",i,i);
		i++;
		
	}   
}
