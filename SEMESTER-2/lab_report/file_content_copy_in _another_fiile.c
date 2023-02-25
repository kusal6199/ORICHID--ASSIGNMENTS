#include <stdio.h>

int main() {
    FILE *example;
    FILE *kushal;
    char ch;

    example= fopen("D:\ORCHID ASSIGNMNMENTS\SEMESTER-2\lab_report\example.txt", "r"); 
    kushal = fopen("E:\kushal.txt.txt", "w"); 

    if (example == NULL) {
        printf("Error: Source file cannot be opened.\n");
        return 1;
    }

    if (kushal == NULL) {
        printf("Error: Destination file cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(example)) != EOF) {
        fputc(ch, kushal);
    }

    printf("File copied successfully.\n");

    fclose(example);
    fclose(kushal);

    return 0;
}
