# Exercise 7

The code is pretty simple:
```
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
```
After the user types his string the program will increment a variable until we get to the end of the string('\0').

Please go to: https://onlinegdb.com and run the full code there.