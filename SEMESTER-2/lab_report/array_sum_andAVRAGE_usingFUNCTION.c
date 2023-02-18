#include<stdio.h>
int sumarray(int a[5]);
void main(){
    int a[5];
    int i;
    printf("enter array number: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    sumarray(a);
}
int sumarray(int a[5])
{
    int i;
    int sum =0, avr;
    for ( i = 0; i < 5; i++)
    {
        sum=sum+a[i];
    }
    avr=sum/5;
    printf("the sum is %d\nthe avrage is %d",sum,avr);
}