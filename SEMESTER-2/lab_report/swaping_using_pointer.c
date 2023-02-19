#include<stdio.h>
int main() {
    int a,b;
    int temp;
    // int *ptr,*ptr2;
    printf("enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    printf("\tbefore swaping a=%d\tb=%d",a,b);
   int *ptr = &a;
   int *ptr2 = &b;

    temp=*ptr;
    *ptr=*ptr2;
    *ptr2=temp;
    printf("\n\tafter swaping a=%d\tb=%d",a,b);

return 0;
}