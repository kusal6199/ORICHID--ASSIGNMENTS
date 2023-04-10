#include<stdio.h>
struct player
{
    char name[30];
    int run;
    int wicket;
};
int main()
{
    struct player p[3];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        printf("\nenter %dno. palyer details: ",i+1);
        printf("\nenter the name: ");
        scanf("%s",p[i].name);
        printf("enter run scored: ");
        scanf("%d",&p[i].run);
        printf("enter wicket taken: ");
        scanf("%d",&p[i].wicket);
    }
    for ( i = 0; i < 3; i++)
    {
        for(j=i+1;j<3;j++){
        if (p[i].run<p[j].run)
        {
            struct player temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
        
        
    }
    }
    printf("player details: ");
    for ( i = 0; i < 3; i++)
    {
        printf("\nname: %s",p[i].name);
        printf("\nrun: %d",p[i].run);
        printf("\nwicket: %d",p[i].wicket);

       
    }
    
    



    return 0;
    
}
