#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

int main ()
{
    char input;
    int dice1, dice2, sum;
    int playerscore = 0 , compscore = 0;
    bool loop;
    
    printf("-----DICE GAME-----\n\n");
    printf("Your goal is to hit 7 or 11\n");
    printf("Press ENTER to begin\n\n");
    getchar();
    
    do
    {   
        printf("Your score is %d\n", playerscore);
        printf("The computer score is %d\n\n", compscore);
        
        //randomizing  values
        
        srand(time(NULL));
        dice1 = (rand() % 6) + 1;
        dice2 = (rand() % 6) + 1;
        
        printf("Dice 1 value is %d\n", dice1);
        printf("Dice 2 value is %d\n", dice2);
        
        sum = dice1 + dice2;
        
        printf("Your sum is %d\n\n", sum);
        
        if(sum == 7 || sum == 11)
        {
            printf("CONGRATS!! Your sum was %d. You win\n\n", sum);
            playerscore++;
        }
        else
        {
            printf("Your sum was not 7 or 11. You lose!\n\n");
            compscore++;
        }
        
        //Ask the player if he would like to continue playing
        
        printf("Would you like to play again?? Press [Y] for yes or [N] for no");
        scanf(" %c", &input);

        input = toupper(input);
        
        if(input == 'Y')
        {
            loop = true;
        }
        else
        {
            loop = false;
        }
        
        printf("\n\n\n\n\n\n\n");
        
    } while(loop == true);
        
    printf("Thank you for playing!!!\n\n");
    
    return 0;
}