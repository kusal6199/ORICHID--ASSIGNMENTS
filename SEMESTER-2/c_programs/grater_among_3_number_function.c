#include<stdio.h>
void grater(int, int ,int );
void grater(int a,int b,int c)
{
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
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    grater(a,b,c);
    return 0;
}