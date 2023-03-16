#include<stdio.h>
void array(int a[5]);

void array(int a[5])
{
    int sum=0,i,avr;
    for ( i = 0; i < 5; i++)
    {
        sum+=a[i];
    }
    avr=sum/5;
    printf("sum= %d\navr= %d",sum,avr);


}
int main() 
{
    int a[5];
    int i;
    printf("enter array elements: ");
    for(i=0;i<5;i++)
    {
       scanf("%d",&a[i]); 
    }
    array(a);
    return 0;

}