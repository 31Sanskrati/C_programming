#include <stdio.h>

int main()
{
    //Calculating tax
    float income;
    printf("Enter your yearly salary: \n");
    scanf("%f", &income);

    if (income < 250000)
    {
        printf("Dont think about tax, rather think how to survive");
    }
    else if (income >= 250000 && income <= 500000)
    {
        printf("You have to pay %f ", income * 0.05);
    }
    else if (income > 500000 && income <= 1000000)
    {
        printf("You have to pay %f ", income * 0.2);
    }
    else
    {
        printf("You have to pay %f ", income * 0.3);
    }

    return 0;
}