#include <stdio.h>

int main()
{ //Greatest of them
    int num1, num2, num3, num4;
    printf("Enter the first number \n");
    scanf("%d", &num1);
    printf("Enter the second number \n");
    scanf("%d", &num2);
    printf("Enter the third number \n");
    scanf("%d", &num3);
    printf("Enter the fourth number \n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("%d is the greatest", num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("%d is the greatest", num2);
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("%d is the greatest", num3);
    }
    else
    {
        printf("%d is the greatest", num4);
    }
    return 0;
}