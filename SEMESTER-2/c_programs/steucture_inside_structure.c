#include<stdio.h>
struct student
{
  char Name[5];
  int roll;
  struct date
  {
    int day;
    int month;
    int year;

  }dob;
};

void main()
{
    int i,j;
    struct student s[2];
    // struct date dob;
    printf("enter the students details: ");
    for (i = 0; i < 2; i++)
    {
        printf("enter the name of %d student:\n",i+1);
        scanf("%s",s[i].Name);
        printf("\nenter the roll of %d student:\n",i+1);
        scanf("%d",&s[i].roll);
        printf("enter the student date of birth in day/month/year formate:\n");
        scanf("%d/%d/%d",&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
    }
    printf("\nthe student details are: ");
	for(i=0;i<2;i++)
    {
	  printf("\nname of %d no. student = %s",i+1,s[i].Name);
      printf("\nroll. of %d no.student = %d",i+1,s[i].roll);
      printf("\ndob of %d no.student =%d/%d/%d",i+1,s[i].dob.day,s[i].dob.month,s[i].dob.year);
      
	}
}