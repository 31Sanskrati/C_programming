#include <stdio.h> 
#include <string.h>

int main() {
    //strlen print length of string excluding the null character
    char *str = "Sanskrati";
    int a = strlen(str);
    printf("Length of %s is %d \n", str, a); //a=9

    //strcpy copies the string from one to another
    char str1[25];
    strcpy(str1, str);
    printf("The value of str2 is %s \n", str1); //ste2 = Sanskrati

    //strcat add one string to other
    char str2[5] = "Jain";
    strcat(str1, str2);
    printf("%s \n", str1); //output SanskratiJain

    //strcmp compare two strings
    int value = strcmp(str, str2);
    printf("Now the value is %d \n", value); //1
    int value2 =strcmp(str, str1);
    printf("Now the value is %d", value2); //-1

    //Negetive value if first strings mismatching character's ASCII value is not greater than second string's corresponding mismatching character. It returns positive values otherwise.

    return 0;
}