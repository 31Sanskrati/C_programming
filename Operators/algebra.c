#include <stdio.h>

int main(){

    int a = 4;
    float b = 4.6678634;
    char c = 'd';
    // %_  --> format specifier
    // &_  --> Address of _
    printf("The value of a is %d \n", a); //%d for integer
    printf("The value of b is %f \n", b); //%f for float
    printf("The value of c is %c \n", c); //%c for character
    printf("The sum of a and b is %f \n", a+b);


    int num1, num2;
    printf("Give the value to num1 \n");
    scanf("%d",&num1);

    printf("Give the value to num2 \n");
    scanf("%d",&num2);

    printf("The value of num1+num2 is %d \n", num1*num2);
    printf("The value of num1 is %d \n", num1);
    return 0;
}