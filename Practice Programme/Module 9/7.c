#include <stdio.h>

int main()
{
    int n, m, i, j;
    float x, sum, avg;
    printf("Enter the numbers of studens and subject = ");
    scanf("%d%d", &n, &m);

    for (i = 1; i <= n; i++)
    {
        printf("Enter The %d Subjects Marks Of %dth Students = ", m, i);
        sum = 0;
        for (j = 1; j <= m; j++)
        {
            scanf("%f", &x);
            sum += x;
        }
        avg = sum / m;
        printf("The avarage of = %f\n", avg);
    }

    return 0;
}
