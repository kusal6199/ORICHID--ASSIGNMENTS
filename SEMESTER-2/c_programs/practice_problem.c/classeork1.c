#include<stdio.h>
#include<math.h>

void main()
{
	int x,y;
	float reasult;
	printf("enter x and y: ");
	scanf("%d%d",&x,&y);
	
	reasult = 5*x*sqrt(y*y+5);
	printf("the reasult is %.3f",reasult);
	
	
}
