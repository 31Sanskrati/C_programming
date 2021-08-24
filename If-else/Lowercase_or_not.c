#include <stdio.h>

int main()
{
    //Lowercase or not
    char alphabet;
    printf("Enter an alphabet character: \n");
    scanf("%c", &alphabet);

    if (alphabet >= 'A' && alphabet <= 'Z')
        printf("Character is Upper Case");
    else
        printf("Character is Lower Case");
        
    return 0;
}