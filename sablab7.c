#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
/*
Start
Input the number (num).
Check the following conditions:
If num > 0:
Print "The number is positive."
Else if num < 0:
Print "The number is negative."
Else:
Print "The number is zero."
End

FLOWCHART
Start
Input the number.
Decision:
Check if the number is greater than 0.
Yes: Print "Positive" and go to End.
No: Check if the number is less than 0.
Yes: Print "Negative" and go to End.
No: Print "Zero" and go to End.
End
Would you l

*/