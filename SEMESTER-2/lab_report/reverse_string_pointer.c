#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character at the end of the string
    str[strcspn(str, "\n")] = '\0';

    reverse(str);

    printf("Reversed string is: %s\n", str);

    return 0;
}

void reverse(char *str)
{
    char *begin, *end, temp;

    // Set the beginning and end pointers
    begin = str;
    end = str + strlen(str) - 1;

    // Swap characters at the beginning and end positions
    while (begin < end)
    {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}
