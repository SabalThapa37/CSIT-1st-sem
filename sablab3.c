#include <stdio.h>

int main() {
    float feet, inches;

    // Input feet
    printf("Enter the length in feet: ");
    scanf("%f", &feet);

    // Convert feet to inches (1 foot = 12 inches)
    inches = feet * 12;

    // Output inches
    printf("The length in inches is: %.2f inches\n", inches);

    return 0;
}
/*
Start
Input the length in feet.
Convert the length to inches using the formula:
Inches
=
Feet
×
12
Inches=Feet×12
Output the length in inches.
End


*/