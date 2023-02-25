#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 5


struct employee {
    char name[50];
    int emp_id;
    float salary;
};

int main() {
    int i;
    float total_salary = 0.0;
    struct employee employees[MAX_EMPLOYEES] = {
        {"John Smith", 1001, 50000.0},
        {"Jane Doe", 1002, 55000.0},
        {"Bob Johnson", 1003, 60000.0},
        {"Mary Williams", 1004, 65000.0},
        {"David Brown", 1005, 70000.0}
    };

   
    printf("%-15s%-15s%-15s\n", "Name", "Employee ID", "Salary");
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        printf("%-15s%-15d%-15.2f\n", employees[i].name, employees[i].emp_id, employees[i].salary);
        total_salary += employees[i].salary;
    }

    
    float avg_salary = total_salary / MAX_EMPLOYEES;
    printf("Average salary: %.2f\n", avg_salary);

    return 0;
}
