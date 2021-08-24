#include <stdio.h>
//This program checks a number is positive or not by using functions and arrays

void check(int *positive, int n)
//Notice we send the address of array not the value of array
{
    for (int i = 0; i < n; i++)
    {
        if (positive[i] > 0)
        {
            printf("%d \n", positive[i]);
        }
        else{
            //do nothing
        }
    }
}
int main()
{
    //Initialising an array
    int positive[3];

    for (int i = 0; i < 3; i++)
    {
        printf("The value of %d integer is ", i + 1);
        scanf("%d", &positive[i]);
    }

    printf("Positive numbers are \n");
    //CALLING THE FUNCTION  
    check(positive, 3);
    return 0;
}