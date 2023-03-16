#include<stdio.h>
void calculator(int a, int b,char ch);

int main()
{
    int a,b;
    char ch;
    printf("enter operand: ");
    scanf("%c",&ch);
    printf("enter two number: ");
    scanf("%d%d",&a,&b);
    calculator(a,b,ch);
    return 0;

}

void calculator(int a, int b,char ch)
{
    
    switch (ch)
    {
    case '+':
    printf("sum=%d",a+b);
    break;
    case '-':
    printf("difference= %d",a-b);
    break;
    case '*':
    printf("multiple= %d",a*b);
    break;
    
    default:printf("not valid");
        break;
    }
}
