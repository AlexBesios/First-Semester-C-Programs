#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    char ASCII,input;
    bool loop;
    
    do
    {
        printf("\nPlease enter a character from the keyboard to convert it to an ASCII number: ");
        scanf(" %c", &ASCII);
        printf("\n %c=%i\n\n", ASCII, ASCII);
        printf("Would you like to enter a different character?? Press [Y] for yes or [N] for no\n");
        scanf(" %c", &input);

        input = toupper(input);
        
        if(input == 'Y')
            loop = true;

        else
            loop = false;

    } while(loop == true);
    
    return 0;
}