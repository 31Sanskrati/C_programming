#include <stdio.h>
//Check the prime
int main()
{
    int num, divide;
    printf("Type a number \n");
    scanf("%d", &num);

    for (int i=2; i < num; i++)
    {   
        if (num%i==0)
        {
            //if num is divisible by smaller number
            printf("Non-prime number");
            break;
        }
        else
        {
            //if num is not divisible
            printf("Prime number");
            break;
        }
    }

    return 0;
}