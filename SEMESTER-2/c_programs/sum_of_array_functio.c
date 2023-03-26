#include<stdio.h>
void summ(int a[],int size);
void summ(int a[],int size)
{
    int i;
    float sum=0.0,avr;
    for ( i = 0; i < size; i++)
    {
      sum+=a[i];
    }
    avr=sum/size;
    printf("the sum is %f and avrage is %f ",sum,avr);
}

int main()
{
    int i,size;
    printf("enter array size: ");
    scanf("%d",&size);
    int a[size];
    printf("enter array element: ");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    summ(a,size);
    

}