#include <stdio.h>

float average(int a, int b, int c);
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    float d = average(num1, num2, num3);
    printf("The average of %d, %d and %d is %f", num1, num2, num3, d);
    return 0;
}

float average(int a, int b, int c)
{
    float avg;
    avg = (float)(a + b + c) / 3; //This is important
    return avg;
}