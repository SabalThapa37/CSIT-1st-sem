#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i;

    // Input marks of 5 students
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i]; // Calculate total marks
    }

    // Calculate percentage
    percentage = (total / (5 * 100)) * 100;

    // Output total marks and percentage
    printf("\nTotal Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
/*
Start
Initialize total = 0.
Input marks of 5 students one by one.
For each student, add marks to total.
Calculate the percentage using the formula:
Percentage
=
(
Total Marks
5
×
100
)
×
100
Percentage=( 
5×100
Total Marks
​
 )×100
Output the total marks and percentage.
End

*/