#include <stdio.h>

int main()
{

    int x, y;
    printf("Please enter th value of (x,y): ");
    scanf("%d%d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("The value (%d,%d) is lies to 1st quardent.", x, y);
    }

    // porer ta aro simplypy kora jabe..

    else
    {
        if (x < 0 && y > 0)
        {
            printf("The value (%d,%d) is lies to 2nd quardent.", x, y);
        }

        else
        {
            if (x < 0 && y < 0)
            {
                printf("The value (%d,%d) is lies to 3rd quardent.", x, y);
            }
            else
            {
                if (x > 0 && y < 0)
                {
                    printf("The value (%d,%d) is lies to 4th quardent.", x, y);
                }
                else
                {
                    printf("The value (%d,%d) is lies to the origin.", x, y);
                }
            }
        }
    }

    return 0;
}