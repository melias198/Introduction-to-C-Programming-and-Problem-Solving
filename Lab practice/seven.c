#include <stdio.h>

int main()
{

    int height;
    printf("Please enter the height of a person in centimeter: ");
    scanf("%d", &height);

    if (height > 150)
    {
        printf("The person is tall.");
    }

    else if (height == 150)
    {
        printf("The person is average.");
    }
    else
    {
        printf("The person is dwarf.");
    }

    return 0;
}