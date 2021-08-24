#include <stdio.h>

struct num
{
    int x;
};

struct num sumNum(struct num num1, struct num num2)
{
    struct num result;
    result.x = num1.x + num2.x;
    return result;
}

int main()
{
    struct num num1, num2, sum;
    num1.x = 50;
    num2.x = 25;

    sum = sumNum(num1, num2);
    printf("Sum is %d", sum);
    return 0;
}