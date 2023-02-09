// Write a program that takes an integer input (1-7) and outputs the
// corresponding day of a week. (Switch)

#include<stdio.h>
void main()
{
    int day;
    printf("enter the no.(1-7): ");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
       printf("Sunday ho latta ");
        break;
    case 2:
       printf("Monday ho latta ");
        break;
    case 3:
       printf("Tuesday ho latta ");
        break;
    case 4:
       printf("Wednesday ho latta");
        break;
    case 5:
       printf("Thursday ho latta");
        break;
    case 6:
       printf("Friday ho latta ");
        break;
    case 7:
       printf("Saturday ho latta ");
        break;

    default:
      printf("valid day han na latta ");
        break;
    }
}