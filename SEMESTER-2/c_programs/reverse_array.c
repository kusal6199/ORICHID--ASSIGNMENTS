#include<stdio.h>
void array(int arr[],int n);
void array(int arr[],int n)
{
    int temp;
    int i;
    for ( i = 0; i < n; i++)
    {
        int temp=arr[n-1];

    }
    
}
int main()
{
    int n,i;
    printf("enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter arry elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("reverse array is: \n");
    for ( i = n-1; i >=0; i--)
    {
        printf("%d\n",arr[i]);
        
    }
    

    

}