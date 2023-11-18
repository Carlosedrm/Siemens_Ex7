#include <stdio.h>

int main()
{
    char s[100]; /*Or any other number we want*/
    printf("Input the string: ");
    scanf("%99[^\n]", s);
    
    int lenght = 0;
    for(int i = 0; s[i] != '\0'; i++){
        lenght++;
    }
    
    printf("The lenght of the string is: %d", lenght);
    return 0;
}
