#include <stdio.h>

int main()
{
    int a;
    printf("Your marks must be contain 0-100.\n");
        printf("Please Enter Your Marks : ");
    scanf("%d", &a);

    

    if (a >= 0 && a <= 32)
            printf("You 'Fail' in the exam.");
    else if (a >= 33 && a <= 39)

        printf("Your GPA is 'D'");
    else if (a >= 40 && a <= 49)
        printf("Your GPA is 'C'");
    else if (a >= 50 && a <= 59)
        printf("Your GPA is 'B'");
    else if (a >= 60 && a <= 69)
        printf("Your GPA is 'A-'");
    else if (a >= 70 && a <= 79)
        printf("Your GPA is 'A'");
    else if(a>=80 && a<=100)
        printf("Your GPA is 'A+'");
    else
    printf("Your Input Invalid Marks.");    
    return 0;
}