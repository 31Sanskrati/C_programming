#include <stdio.h> 

void encrypt(char * mess){
    char *ptr = mess;
    while (*ptr!='\0')
    {
        *ptr = *ptr+1; 
        ptr++;
    }
    
}
int main() {
    char mess[] = "come to my room";
    encrypt(mess);
    printf("Encrypted message is %s", mess);
    return 0;
}