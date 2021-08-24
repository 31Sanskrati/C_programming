#include <stdio.h>
//This program write the data of real and complex part of complex number in right format

typedef struct complex
{
    int real;
    int img;
} ComplexNo;

int main()
{
    struct complex number[5];
    
    //Input from user
    int n = 0;
    while (n < 5)
    {
        //real part
        printf("Enter the real part of complex no. \n");
        scanf("%d", &number[n].real);
        //imaginary part
        printf("Enter the imaginary part \n");
        scanf("%d", &number[n].img);
        n++;
    }

    //Print the above nput in complex number format
    int m = 0;
    while (m < 5)
    {
        printf("Complex no. = %d + i%d \n", number[m].real, number[m].img);
        m++;
    }

    return 0;
}