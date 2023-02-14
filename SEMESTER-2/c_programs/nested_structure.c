#include<stdio.h>
struct students
{
   char name[10];
   int roll;
   struct bday
   {
    int day;
    int month;
    int year;
   } b1,b2,b3;
   
};

void main()
