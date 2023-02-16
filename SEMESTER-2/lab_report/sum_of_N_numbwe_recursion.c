#include<stdio.h>
int addNnumbers(int n);

int addNnumbers(int a){
    int sum=0, n,i;
    printf("enter limiting value of n (1 to 9): ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
       sum=sum+i;
    }
    return(sum);
}

int main(){
    int a;
    int ans=addNnumbers(a);
    printf("the final sum is %d",ans);
    return 0;
}