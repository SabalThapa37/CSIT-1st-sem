#include<stdio.h>
int main()
{
float mark;
    printf("Enter the obtained mark: \n");
    scanf("%f",&mark);
    if (mark<40)
    {
        printf("You got %f .\n You have failed.",mark);
    }
    else if (mark>40 && mark<50)
    {
        printf("You got %f .\n You have just passed.",mark);
    }
    else if (mark>50 && mark<=60)
    {
        printf("You got %f .\nYou have obtained third division",mark);
    }
    else if (mark>60 && mark<=70)
    {
        printf("You got %f .\nYou khave obtained second division",mark);
    }
    else if (mark>70 && mark<=80)
    {
        printf("You got %f .\nYou have obtained first division",mark);
    }
    else 
    {
        printf("You got %f .\n You have obtained distinction",mark);
    }
return 0;
}