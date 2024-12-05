#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility conditions
    if ((num % 5 == 0) && (num % 3 == 0) && (num % 10 != 0)) {
        printf("The number %d is divisible by 5 and 3 but not 10.\n", num);
    } else {
        printf("The number %d does not meet the criteria.\n", num);
    }

    return 0;
}
/*
Start
Input the number (num).
Check the following conditions:
If num % 5 == 0 and num % 3 == 0 and num % 10 != 0:
Print "The number is divisible by 5 and 3 but not 10."
Else:
Print "The number does not meet the criteria."
End

FLOWCHART 
Start
Input the number.
Check if the number satisfies all conditions:
Divisible by 5 (num % 5 == 0).
Divisible by 3 (num % 3 == 0).
Not divisible by 10 (num % 10 != 0).
Decision:
 Yes: Print "The number is divisible by 5 and 3 but not 10."
 No: Print "The number does not meet the criteria."
End
*/