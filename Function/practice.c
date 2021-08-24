#include <stdio.h>

int function(int i, int j);

int main()
{
    int a = 5, b = 54;
    printf("The value of a and b is %d and %d \n", a, b);
    printf("The average of %d and %d is %d \n", a, b, function(a, b));
    return 0;
}

int function(int i, int j)
{
    int avg;
    avg = (i + j) / 2;
    return avg;
}