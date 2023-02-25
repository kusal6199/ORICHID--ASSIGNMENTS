#include <stdio.h>

#define MAX_NAME_LENGTH 50

struct student {
    char name[MAX_NAME_LENGTH];
    int roll_number;
    int marks;
};

int main() {
    
    struct student stu = { "John Doe", 12345, 85 };

    
    struct student* stu_ptr = &stu;


    printf("Name: %s\n", stu_ptr->name);
    printf("Roll Number: %d\n", stu_ptr->roll_number);
    printf("Marks: %d\n", stu_ptr->marks);

    return 0;
}
