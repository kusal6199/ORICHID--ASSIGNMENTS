#include <stdio.h>

int main() {
	int n, i, j;
	printf("program title: bubble sorting of array");
	printf("\nauthor: Kushal Kandel");
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	
	printf("Enter the elements of the array:\n");
	for (i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	
	for (i = 0; i<n-1; i++) {
	    for (j = 0; j<n-i-1; j++) {
	        if (a[j] > a[j + 1]){
	            int temp = a[j];
	            a[j] = a[j + 1];
	            a[j + 1] = temp;
	        }
	    }
	}
	
	printf("Sorted array: ");
	for (i = 0; i<n; i++)
	    printf("%d ", a[i]);

return 0;
}