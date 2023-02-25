#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;
     printf("Program Name: C program to count total chracter in any file");
    printf("\nAuthor:Kushal Kandel\n");

    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error: File cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);

    printf("The file contains %d characters.\n", count);

    return 0;
}
