#include <stdio.h>
#include <stdlib.h> 

int main()
{
	FILE *fptr;

	char filename[100], c;
     printf("Program Name: C program to print the content of file");
    printf("\nAuthor:Kushal Kandel\n");

	printf("Enter the filename to open \n");
	scanf("%s", filename);

	
	fptr = fopen(filename, "r");
    
	if (fptr == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
	c = fgetc(fptr);
	while (c != EOF)
	{
		printf ("%c", c);
		c = fgetc(fptr);
	}

	fclose(fptr);
	return 0;
}
