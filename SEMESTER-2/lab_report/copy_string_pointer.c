#include <stdio.h>

int main() {
    char source[] = "Hello, world!";
    char destination[50];

    char *srcPtr = source;     
    char *destPtr = destination;    

    while (*srcPtr != '\0') {   
        *destPtr = *srcPtr;     
        srcPtr++;               
        destPtr++;              
    }

    *destPtr = '\0';            
    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}
