#include<stdio.h>
#include<math.h>
void main(){
int num,count=1,sum,rem;
while(count<=500)
{
	num=count;
	sum=0;
	while(num)
	{
		rem=num%10;
		sum=sum+pow(rem,3);
		num=num/10;
//		count++;
	}
	if(count== sum)
	{
		printf("%d is armstromg number\n",count);
	}
	count++;
}
	

}
