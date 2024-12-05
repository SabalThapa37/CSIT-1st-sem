#include <stdio.h>
#define PI 3.14159  // Define PI as a constant

int main() {
    float radius, area;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Output area
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}

/*algo 
Start
Define the constant PI with a value of 3.14159.
Input the radius of the circle.
Calculate the area using the formula:
Area
=
𝜋
×
radius
2
Area=π×radius 
2
 
Output the calculated area.
End
*/