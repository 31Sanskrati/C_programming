#include <stdio.h>

int main()
{
    //calculating you can drive or not
    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age<17)
    {
        printf("You cant drive");
    }
    else if ((age==17) || (age==18))
    {
        printf("Just focus on your entrance exam");
    }
    else
    {
        printf("You can drive");
    }
    return 0;
}