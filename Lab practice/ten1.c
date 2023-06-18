#include <stdio.h>

int main()
{

    int math, phy, chem;
    printf("Eligibility Criteria:\n");
    printf("Marks in Math >=65\n");
    printf("Marks in Phy >=55\n");
    printf("Marks in Chem >=50\n");
    printf("Total Marks in all three subjects >=190\n");
    printf("Total Marks in Math and Phy >=140\n");
    printf("----------------------------------\n");

    printf("Please enter your marks on Math: ");
    scanf("%d", &math);
    printf("Please enter your marks on Phy: ");
    scanf("%d", &phy);
    printf("Please enter your marks on Chem: ");
    scanf("%d", &chem);

    printf("Your Total Marks in all three subjects is = %d\n", math + phy + chem);
    printf("Your Total Marks in Math and Phy is = %d\n", math + phy);

    if (math >= 65)
        if (phy >= 55)
            if (chem >= 50)
                if ((math + phy + chem) >= 190 || (math + phy) >= 140)
                    printf("Congratulation! you are eligible for admission test.");
                else
                    printf("Sorry! you are not eligible for admission test.");
            else
                printf("Sorry! you are not eligible for admission test.");
        else
            printf("Sorry! you are not eligible for admission test.");
    else
        printf("Sorry! you are not eligible for admission test.");

    return 0;
}