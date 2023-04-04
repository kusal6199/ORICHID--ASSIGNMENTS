// Write a C program to generate the following output using a loop. [5]
// 1 0 1 0 1
// 0 1 0 1
// 1 0 1
// 0 1
// 1

#include <stdio.h>
int main() {
int i, j, k;
for (i = 5; i >= 1; i--) { 
k = i % 2; 
for (j = 1; j <= i; j++) { 
printf("%d ", k); 
k = !k; 
}
printf("\n"); 
}
return 0;
}