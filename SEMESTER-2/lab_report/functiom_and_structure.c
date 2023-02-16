#include<stdio.h>
struct student
{
    int age;
    char name[20];
    int roll;
} stu;
void print_details(struct student stu);

void print_details(struct student stu){
    printf("age = %d",stu.age);
     printf("\nname = %s",stu.name);
      printf("\nroll = %d",stu.roll);


}

int main(){
    struct student stu={20,"lina",7};
    print_details(stu);

}