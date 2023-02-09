// // WAP in C that takes an operator ('+', '-', '*', '/', '%') and two integers as
// inputs, and outputs the result of the operation. (Switch)

#include<stdio.h>
void main(){
    char ch;
    int a,b,operation,s,d,m,di,mo;
    printf("la van kun operation garxas: ");
    scanf("%c",&ch);
    printf("sabbyash! la khurukhuru 2ta num han ta : ");
    scanf("%d%d",&a,&b);
    switch (ch)
    {
    case '+': s=a+b;
        printf("lau ja sum=%d",s);
        break;
     case '-': d=a-b;
        printf("lau ja differerencce=%d",d);
        break;
     case '*': m=a*b;
        printf("lau ja multiple=%d",m);
        break;
     case '/': s=a/b;
        printf("lau ja division=%d",di);
        break;
     case '%': s=a%b;
        printf("lau ja remender=%d",mo);
        break;
    default:
        printf("valid operator han yrrrrrrrrrr");
        break;
    }
}