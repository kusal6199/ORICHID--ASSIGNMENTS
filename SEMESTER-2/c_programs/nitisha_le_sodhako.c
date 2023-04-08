#include<stdio.h>
#include<string.h>
struct book
{
    char bid[30];
    char title [30];
    int price;
    int page;
};
int main()
{
    struct book b[3];
    struct book *ptr[3];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        ptr[i]=&b[i];
    }

    for ( i = 0; i < 3; i++)
    {
        printf("Enter %d no. book details:\n",i+1);
        printf("enter bid: ");
        scanf("%s",(*ptr[i]).bid);
        printf("enter title: ");
        scanf("%s",(*ptr[i]).title);
        printf("enter price: ");
        scanf("%d",&(*ptr[i]).price);
        printf("enter no. of pages: ");
        scanf("%d",&(*ptr[i]).page);
    }
    for ( i = 0; i < 3; i++)
    {
       for (j = i+1; j < 3; j++)
       {
        if (strcmp(ptr[i]->title,ptr[j]->title)<0)
        {
           struct book temp = *ptr[i];
           *ptr[i]=*ptr[j];
           *ptr[j]=temp;
        }
       }
       printf("details of book in desending order on the basis of title:\n");
       for ( i = 0; i < 3; i++)
       {
        printf("details of %d no. book:\n",i+1);
        printf("bid: %s\n",ptr[i]->bid);
        printf("tile: %s\n",ptr[i]->title);
        printf("pages: %d\n",ptr[i]->page);
        printf("price: %d\n",ptr[i]->price);
        printf("\n");
       }
    }
    return 0;
}
