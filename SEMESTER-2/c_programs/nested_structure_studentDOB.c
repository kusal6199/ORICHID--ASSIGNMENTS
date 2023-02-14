#include<stdio.h>

struct birthday{
	int day;
	int month;
	int year;
	};
	
struct student{
	int roll;
	char name[10];
	struct birthday dob[2];

	}; 


void main()
{
	int i,n;
	struct student st[2];
//	struct birthday bdy[3];
	printf("enter student details: ");
	for(i=0;i<2;i++)
	{
		printf("\nenter name and roll. of student %d: ",i+1);
		scanf("%s%d",st[i].name,&st[i].roll);
		printf("enter birthdate of student in day/month/year formate: ");
		scanf("%d/%d/%d",&st[i].dob[i].day,&st[i].dob[i].month,&st[i].dob[i].year);
		
	}
	printf("the student details are: ");
	for(i=0;i<2;i++){
	   printf("\nstudent number: %d\n", i + 1);
	   printf("name=%s\nroll=%d\ndob=%d/%d/%d",st[i].name,st[i].roll,st[i].dob[i].day,st[i].dob[i].month,st[i].dob[i].year);
	}
	
	
}