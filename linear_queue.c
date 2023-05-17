//linear queue 
#include<stdio.h>
// #include<conio.h>
#define max 100
int queue[max];
int front=-1,rear=-1;
void Insert_Element();
void Delete_Element();
void Display_Queue();
void Empty_Queue();

int main(void){
   int choice;
   printf("---------------------------enter choice you want------------------------");
   do
   {
    printf("\n\n 1.insert an element");
    printf("\n\n 2.Delet an element");
    printf("\n\n 3.diaplay queue");
    printf("\n\n 4.empty queue");
    printf("\n\n 5. exit");
    printf("\n\n Enter your choice ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        Insert_Element();
        break;
    case 2:
        Delete_Element();
        break;
    case 3:
        Display_Queue();
        break;
    case 4:
        Empty_Queue();
        break;
    case 5: 
    return 0;

    default:
        break;
    }


   } while (choice!=5);
   return 0;
   
}
void Insert_Element(){
    int n;
    if (rear<max-1)
    {
        if (front==-1)
        {
            front=0;
        }
        printf("enter the element to be inserted: ");
        scanf("%d",&n);
        queue[++rear]=n;
    }
    else{
        printf("queue is overflow");
    }
}
    void Delete_Element(){
        int n;
        if (front==-1||front>rear)
        {
           printf("empty queue");
        }
        else{
            n=queue[front++];
            printf("the element is deleted :- %d",n );
        }
    }
    void Display_Queue(){
        int i;
        if (front==-1||front>rear){
            printf("no element is to be dispaly: ");
        }
        else{
            printf("the number of emement in queuee\n ");
            for ( i = front; i <=rear; i++)
            {
                printf("element at %d is %d \n",i,queue[i]);
            }
            
        }

    }
    void Empty_Queue(){
        front=-1;
        rear=-1;
        printf("empty succssfully");

    }
    
