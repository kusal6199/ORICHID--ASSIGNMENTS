#include<stdio.h>
int main(){
    int A;
    int B;
    char operator;
    printf("enter the 1st num");
    scanf("%d", & A);
    printf("enter the second number");
    scanf("%d", & B);
    printf("enter the operation you want to perfom");
    scanf("%c", & operator);
    int sum = A+B;
    int sub= A-B;
    int mul = A*B;
    int div = A/B;
    switch(operator) {
        case '+' : printf("the sum is %d", sum);
        break;
        
        case '-' : printf("the difference is %d", sub);
        break;

        case '*' : printf("the product is %d", mul);
        break;

        case '/' : printf("the division is %d", div);
        break;

        default : printf("not a valid operator");
    }
     
;
    return 0;

}