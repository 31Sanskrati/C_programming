#include <stdio.h> 
//This program shows the airthmatic in pointers 
int main() {

    int a = 568;
    int *ptr_a = &a;

    int b = 4;
    int *ptr_b = &b;

    int x= (ptr_a - ptr_b);
    printf("The address of %d is %d \n", a, ptr_a);
    printf("The address of %d is %d \n", b, ptr_b);
    printf("No. of bytes used to store int is %d ", x); //output --> 1

    // ptr++;
    // printf("After increment %d \n", ptr); 
    // ptr--;
    // ptr--;
    // printf("After decrement %d \n", ptr);
    return 0;
}