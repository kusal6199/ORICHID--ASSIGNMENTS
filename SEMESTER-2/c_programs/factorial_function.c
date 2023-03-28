#include<stdio.h>
void fact(int a);
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    fact(a);
    return 0;
}

void fact(int a)
{
    int i,fact=1;
    for ( i = 1; i <= a; i++)
    {
        fact=fact*i;
    }
    printf("the factorial of number is %d",fact);
}

// #include<stdio.h>
// int factorial(int x);

// int factorial(int a){
//     int fact=1;
//     int i,n;
//     printf("enter a number: ");
//     scanf("%d",&n);

//     for ( i = n; i>0; i--)
//     {
//         fact=fact*i;
//     }
//     return(fact);
    
// }
// void main(){
//      int n;
//     // printf("enter a number: ");
//     // scanf("%d",&n);
//     int ans=factorial(n);
//     printf("the factorial is %d",ans);


// }