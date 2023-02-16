// Write a Program in C to display sum of two numbers using function.

#include<stdio.h>
int addnumber(int a, int b);


int main()
{
  int x ,y;
  printf("enter two number: ");
  scanf("%d%d",&x,&y);
  int reasult=addnumber(x,y);
  printf("the sum is %d",reasult);
  
 

}

int addnumber(int x,int y){
    int sum=x+y;
    return sum;
   
}