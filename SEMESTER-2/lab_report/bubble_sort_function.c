#include<stdio.h>
void bubble(int a[5]);

void main()
{
    int a[5];
    int i;
    printf("enter array element: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a);
}

void bubble(int a[5])
{
 int i,j;
 for ( i = 0; i < 5-1; i++)
 {
    for ( j = 0; j < 5-i-1; j++)
    {
        if (a[j] > a[j + 1]){
	            int temp = a[j];
	            a[j] = a[j + 1];
	            a[j + 1] = temp;
        }
    
 }
}
printf("Sorted array: ");
for (i = 0; i<5; i++)
printf("%d ", a[i]);
}