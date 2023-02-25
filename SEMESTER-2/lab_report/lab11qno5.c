#include <stdio.h>

struct rectangle {
    int length;
    int width;
};

int calculate_area(struct rectangle rect) {
    int area = rect.length * rect.width;
    printf("The area of the rectangle is %d.\n", area);
    return area;
}

int main() {
   
    struct rectangle rect = { 5, 10 };

    int area = calculate_area(rect);

    return 0;
}
