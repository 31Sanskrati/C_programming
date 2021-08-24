#include <stdio.h>

int main()
{
    // Calculating pass or fail
    float math, science, social, max, total;

    printf("Enter your maths marks: \n");
    scanf("%f", &math);
    printf("Enter your science marks: \n");
    scanf("%f", &science);
    printf("Enter your social marks: \n");
    scanf("%f", &social);
    printf("Enter your Maximummarks: \n");
    scanf("%f", &max);

    total = (math + science + social) * 100 / (max * 3);
    printf("Your percentade is %f \n", total);

    float math_per, sci_per, soc_per;
    math_per = (math * 100) / max;
    sci_per = (science * 100) / max;
    soc_per = (social * 100) / max;

    if ((total < 40) || math_per < 33 || sci_per < 33 || soc_per < 33)
    {
        printf("You failed");
    }
    else
    {
        printf("Congratulation you passed");
    }

    return 0;
}