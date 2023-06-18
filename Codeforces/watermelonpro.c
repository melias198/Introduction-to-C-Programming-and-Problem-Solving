#include <stdio.h>

int main()
{
    // ekta water melon 2joner moddhe soman soman jor sonkha akare vag kore dite hobe.

    int w;
    printf("Please enter the weight of watermelon: ");
    scanf("%d", &w);

    if (w % 4 == 0)
    {
        printf("Its possible to divied two person.");
    }

    else
    {
        printf("Its impossible to divied two person.");
    }

    return 0;
}