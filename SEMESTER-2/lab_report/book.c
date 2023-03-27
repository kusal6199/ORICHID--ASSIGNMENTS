#include<stdio.h>
struct book
{
    char title[20];
    char author[20];
    int year;
};
int main()
{
    int i,j,y;
    struct book b[3];
    for ( i = 0; i < 3; i++)
    {
        printf("%d.Number book detail: ",i+1);
        printf("\nenter Tile author and year of publiction: ");
        scanf("%s%s%d",b[i].title,b[i].author,&b[i].year);
    }
    printf("enter the year: ");
    scanf("%d",&y);
    for ( i = 0; i < 10; i++)
    {
       if (y==b[i].year)
       {
        printf("title: %s",b[i].title);
        printf("\nauthor: %s",b[i].author);
       }
       
    }
    return 0;
    
}