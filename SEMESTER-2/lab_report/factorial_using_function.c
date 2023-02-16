#include<stdio.h>
int factorial(int x);

int factorial(int a){
    int fact=1;
    int i,n;
    printf("enter a number: ");
    scanf("%d",&n);

    for ( i = n; i>0; i--)
    {
        fact=fact*i;
    }
    return(fact);
    
}
void main(){
     int n;
    // printf("enter a number: ");
    // scanf("%d",&n);
    int ans=factorial(n);
    printf("the factorial is %d",ans);


}