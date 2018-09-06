#include <stdio.h>

int game_state = 1; //Variable that keeps track of the game state

int
main(void)
{
    char answer;
    MainMenu();
    Game();
 	return(0);
}

void MainMenu(){
    char answer;
    while(game_state == 1)
    {
        printf("[//------Main Menu------//] \n\n");
        printf("Enter the Game Y/N? \n: ");
        while(game_state == 1)
        {
            scanf(" %c", &answer);

            if(answer == 'y')
            {
                game_state = 2;
            }
            else if(answer == 'n')
            {
              return(0);
            }
            else
            {
                printf("Please Enter y or n \n: ");
            }
        }
    } //End of while for main menu
}

void Game(){
    while(game_state == 2){
        printf("[//------Game------//]");
        return(0);
    }
}
