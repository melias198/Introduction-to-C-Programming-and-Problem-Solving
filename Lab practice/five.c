#include <stdio.h>

int main()
{

    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("Congratulation! You are eligible for casting vote.");
    }
    else
    {
        printf("Sorry! You are not eligible for caste vote.\n");
        printf("You would be able to caste your vote after %d year.", 18 - age);
    }

    return 0;
}