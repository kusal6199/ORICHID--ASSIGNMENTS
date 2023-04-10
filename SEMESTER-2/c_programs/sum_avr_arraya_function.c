#include<stdio.h>
void sum(int arr[],int n);
void sum(int arr[],int n)
{
    int i,summ=0;
    float avr;
    for ( i = 0; i < n; i++)
    {
        summ+=arr[i];
    }
    avr=summ/n;
    printf("the sum is %d\nand avrage is %f",summ,avr);
    
}
int main()
{
    int i,n;
    printf("enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:\n");
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
    sum(arr,n);
    return 0;
    

}