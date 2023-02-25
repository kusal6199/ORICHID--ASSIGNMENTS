#include <stdio.h>

#define MAX_COURSES 5
#define MAX_NAME_LENGTH 50
#define MAX_CODE_LENGTH 10

struct course {
    char name[MAX_NAME_LENGTH];
    char code[MAX_CODE_LENGTH];
    int credit_hours;
};

struct student {
    char name[MAX_NAME_LENGTH];
    int roll_number;
    struct course courses[MAX_COURSES];
};

int main() {
    
    struct student students[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the roll number of student %d: ", i+1);
        scanf("%d", &students[i].roll_number);
        for (int j = 0; j < MAX_COURSES; j++) {
            printf("Enter the name of course %d for student %d: ", j+1, i+1);
            scanf("%s", students[i].courses[j].name);
            printf("Enter the code of course %d for student %d: ", j+1, i+1);
            scanf("%s", students[i].courses[j].code);
            printf("Enter the credit hours of course %d for student %d: ", j+1, i+1);
            scanf("%d", &students[i].courses[j].credit_hours);
        }
    }

    
    for (int i = 0; i < 5; i++) {
        printf("Details of student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Courses:\n");
        for (int j = 0; j < MAX_COURSES; j++) {
            printf("%d. Name: %s, Code: %s, Credit Hours: %d\n", j+1, students[i].courses[j].name, students[i].courses[j].code, students[i].courses[j].credit_hours);
        }
        printf("\n");
    }

    return 0;
}
