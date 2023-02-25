#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int num1, num2, sum;
    printf("Program Name: C program that reads two numbers from a file named input.txt, adds them together, and then writes the sum to another file named output.txt:");
    printf("\nAuthor:Kushal Kandel\n");

    inputFile = fopen("example.txt", "r");

    if (inputFile == NULL) {
        printf("Error: input.txt file cannot be opened.\n");
        return 1;
    }

    fscanf(inputFile, "%d %d", &num1, &num2);

    fclose(inputFile);

    sum = num1 + num2;

    outputFile = fopen("kushal.txt", "w");

    if (outputFile == NULL) {
        printf("Error: output.txt file cannot be opened.\n");
        return 1;
    }

    fprintf(outputFile, "The sum of %d and %d is %d.", num1, num2, sum);

    fclose(outputFile);

    printf("Sum written to kushal.txt file.\n");

    return 0;
}
