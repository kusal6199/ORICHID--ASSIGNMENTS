// Write a C program to store the player name, runs scored, wickets taken of 20 cricketers using
// structure along with pointer then arrange the players in order of maximum wickets to minimum
// wickets they had taken.

#include<stdio.h>
struct player
{
   char name[20];
   int run;
   int wicket;
};
int main(){
    struct player p[3];
    struct player *ptr[3];
//    *ptr[3]=&p[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
       
       printf("enter the %d player name: ",i+1);
       scanf("%s",&ptr[i]->name);
       printf("enter the %d player run scored: ",i+1);
       scanf("%d",&ptr[i]->run);
       printf("enter the %d player wicket taken: ",i+1);
       scanf("%d",&ptr[i]->wicket);
    //    struct player *ptr[i]= &p[3];
    }
}
