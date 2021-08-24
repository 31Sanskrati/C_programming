#include <stdio.h>

//This program contains various methods to do sum of n natural numbers
int main()
{
    // int i, sum, n;
    // printf("Enter the value of n \n");
    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // printf("The sum is %d", sum);

int i, sum;

    // for (i = 1; i <= 10; i++)
    // {
    //     sum += i*8;
    // }

    // while (i<=10)
    // {
    //     sum += i*8;
    //     i++; 
    // }
    
    do
    {
       sum += i*8;
        i++; 
    } while (i<=10);
    
    printf("The sum is %d", sum);

    return 0;
}