#include <stdio.h>
int main()
{
    int n, i, j;
    printf("program title: Slection array sort");
	printf("\nauthor: Kushal Kandel");
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the elements of the array:\n");
	for (i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
    int min_index;
    for(i = 0; i < n - 1; i++) {
        min_index = i;
        for(j = i + 1; j < n; j++) {
            if(a[min_index] > a[j]) {
                min_index = j;
            }
        }
        if(min_index!= i)
        {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)  {
        printf(" %d", a[i]);
    }
    return 0;
}
