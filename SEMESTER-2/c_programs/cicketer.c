#include<stdio.h>
struct player
{
   char name[40];
   int run;
   int wicket;
};
int main() {
    int i,j;
    struct player p[3];
    struct player *ptr[3];
    printf("enter player details: ");
    for ( i = 0; i < 3; i++)
    {
        ptr[i]=&p[i];
        printf("name of %dno. player: ",i+1);
        scanf("%s",ptr[i]->name);
        printf("run of %dno. player: ",i+1);
        scanf("%d",&ptr[i]->run);
        printf("wicket of %dno. player: ",i+1);
        scanf("%d",&ptr[i]->wicket);

    }
    for ( i = 0; i < 3; i++)
    {
       for ( j = i+1; j < 3; j++)
       {
        if (ptr[i]->wicket<ptr[j]->wicket)
        {
            struct player temp=*ptr[i];
            *ptr[i]=*ptr[j];
            *ptr[j]=temp;
        }
        
       }
       
    }
    printf("deteils of player according to max wicket taken order: ");
    for ( i = 0; i < 3; i++)
    {
        printf("\nname: %s",ptr[i]->name);
        printf("\trun: %d",ptr[i]->run);
        printf("\nwicket: %d",ptr[i]->wicket);


    }
    
    


    

    

    return 0;
}
