#include<stdio.h>
#include<string.h>
void reverse(char str[]);

int main() {
    char str[100];
    printf("program name: Program in C to reverse string using function.\n");
    printf("Author: Kushal Kadel\n");
   
    printf("Enter a string: ");
    
    scanf("%s", str);

    reverse(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

void reverse(char str[]) {
    strrev(str);
}
