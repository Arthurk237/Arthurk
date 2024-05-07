#include <stdio.h>

float calculateArea(float radius);

int main() {
    
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = calculateArea(radius);

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}

// Function to calculate area of a circle
float calculateArea(float radius) {
    const float PI = 3.14159;
    float area = PI * radius * radius;
    return area;
}
