#include <stdio.h>

struct student {
    char name[50];
    int roll_no;
    char gender;
    float marks;
};

int main() {
    struct student s1 = {"kushal", 101, 'M', 80.5};
    struct student s2 = {"kritika", 102, 'F', 90.0};

    printf("Student 1: \n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Gender: %c\n", s1.gender);
    printf("Marks: %.2f\n", s1.marks);

    printf("\nStudent 2: \n");
    printf("Name: %s\n", s2.name);
    printf("Roll No: %d\n", s2.roll_no);
    printf("Gender: %c\n", s2.gender);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}
