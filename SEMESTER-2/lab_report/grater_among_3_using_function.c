#include<stdio.h>
void grater_number(int x,int y,int z);


void grater_number(int a, int b, int c){
    if (a>=b&&a>=c)
    printf("%d is grater",a);
    else if (b>=a&&b>=c)
    printf("%d is grater",b);
    else
    printf("%d is grater",c);
    
}


int main()
{
    int a,b,c;
    printf("enter the three number: ");
    scanf("%d%d%d",&a,&b,&c);
    grater_number(a,b,c);
    return 0;
}
