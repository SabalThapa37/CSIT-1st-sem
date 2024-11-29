#include<stdio.h>
int main()
{
    char ch;
    float num_1 ,num_2;
    printf("enter the two numbers");
    scanf("%f \n %f",&num_1,&num_2);
    
    printf("enter the operation i.e +,-,* or / for addition substreaction multiplication and division respectively \n");
    scanf(" %c",&ch);

    switch (ch)
    {
    case '+':
        printf("The sum of the numbers is : %f",(num_1+num_2));
        break;
    case '-':
        printf("The subtraction of the numbers is : %f",(num_1-num_2));
        break;
    case '*':
        printf("The multiplication of the numbers is : %f",(num_1*num_2));
        break;
    case '/':
        printf("The division of the numbers is : %f",(num_1/num_2));
        break;
    default:
        printf("It is not an operator");
    }

return 0;
}