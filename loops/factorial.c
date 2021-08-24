#include <stdio.h> 

int main() {
    //To give the initial value is the most important thing
    int i=1, multi=1, n;

    printf("Number for factorial \n");
    scanf("%d", &n);

    for (int i = 1; i <=n ; i++)
    {
        multi *=i;
    }
    printf("The factorial of %d is %d", n, multi);
    
    return 0;
}