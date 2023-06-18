#include <stdio.h>

int main()
{
    // ekta water melon 2joner moddhe jor sonkha akare vag kore dite hobe.

    int w;
    printf("Please enter the weight of watermelon: ");
    scanf("%d", &w);

    // 2 hole jor akare vag kore deya jabena.
    if (w == 2)
    {
        printf("Its impossible to divied two person.");
    }

    else if (w % 2 == 0)
    {
        printf("Its possible to divied two person.");
    }

    else
    {
        printf("Its impossible to divied two person.");
    }

    return 0;
}