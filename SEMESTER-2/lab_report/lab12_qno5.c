#include <stdio.h>

struct employee{
    int id;
    char name[50];
    float salary;
} e;

int main() {
    FILE *fp;
    printf("Program Name:C Program to store employee information (id, name, salary) in a file example.txt.");
    printf("\nAuthor:Kushal Kandel\n");

    fp = fopen("example.txt", "w");

    if (fp == NULL) {
        printf("Error: File cannot be opened.\n");
        return 1;
    }

    printf("Enter employee ID: ");
    scanf("%d", &e.id);
    printf("Enter employee name: ");
    scanf("%s", e.name);
    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    fprintf(fp, "%d %s %.2f", e.id, e.name, e.salary);

    fclose(fp);

    printf("Employee information stored in file.\n");

    return 0;
}
