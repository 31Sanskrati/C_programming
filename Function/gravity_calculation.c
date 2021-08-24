#include <stdio.h>

float gravity(float m);
int main()
{
    float mass;
    printf("Enter the mass \n");
    scanf("%f", &mass);

    float calculate = gravity(mass);

    printf("The force of gravity on object of mass %f is %f", mass, calculate);
    return 0;
}

float gravity(float m)
{
    float force = (float)(m * 9.8);
    return force;
}