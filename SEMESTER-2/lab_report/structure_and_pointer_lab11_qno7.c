#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LOCATIONS 5

struct location {
    char location_name[50];
    int x_coordinate;
    int y_coordinate;
};

int main() {
    struct location locations[MAX_LOCATIONS];
    struct location *ptr_location = locations; 
   
    for (int i = 0; i < MAX_LOCATIONS; i++) {
        printf("Enter the name of location %d: ", i+1);
        scanf("%s", (ptr_location + i)->location_name);
        printf("Enter the x-coordinate of location %d: ", i+1);
        scanf("%d", &(ptr_location + i)->x_coordinate);
        printf("Enter the y-coordinate of location %d: ", i+1);
        scanf("%d", &(ptr_location + i)->y_coordinate);
    }

   
    printf("\nLocation information:\n");
    for (int i = 0; i < MAX_LOCATIONS; i++) {
        printf("Location %d\n", i+1);
        printf("Name: %s\n", (ptr_location + i)->location_name);
        printf("x-coordinate: %d\n", (ptr_location + i)->x_coordinate);
        printf("y-coordinate: %d\n", (ptr_location + i)->y_coordinate);
    }

    return 0;
}
