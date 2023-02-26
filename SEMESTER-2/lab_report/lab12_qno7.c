#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int num, i;

    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");
    printf("Program Name: C program to accept 10 numbers from a user and store them in odd.txt file if number is odd, or even.txt file (if number is even) then display odd numbers reading from odd.txt file.");
    printf("\nAuthor:Kushal Kandel\n");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error: Files cannot be opened.\n");
        return 1;
    }

    for (i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    oddFile = fopen("odd.txt", "r");

    if (oddFile == NULL) {
        printf("Error: odd.txt file cannot be opened.\n");
        return 1;
    }

    printf("Odd numbers: ");
    while (fscanf(oddFile, "%d", &num) == 1) {
        printf("%d ", num);
    }

    fclose(oddFile);

    return 0;
}
