#include<stdio.h>
int main()
{
    int a,b;
    int sum,dif,mul,div;
    char ch;
    printf("enter the chracter: ");
    scanf("%c",&ch);
    printf("enter two number: ");
    scanf("%d%d",&a,&b);
    
    sum=a+b;
    dif=a-b;
    mul=a*b;
    div=a/b;
    switch (ch)
    {
    case '+': printf("the sum is %d",sum);
        break;
    case '-': printf("the difference is %d",dif);
        break;
    case '*': printf("the multiple is %d",mul);
        break;
    case '/': printf("the division is %d",div);
        break;
    default: printf("not a valid operator");
        break;
    }

}