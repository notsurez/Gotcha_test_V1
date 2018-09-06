#include <stdio.h>

int game_state = 1; //Variable that keeps track of the game state

int
main(void)
{
    char answer;
    MainMenu();
    Game();
    Info();
}

void MainMenu(){
    char answer;
    while(game_state == 1)
    {
        //Title
        printf("[//------Le Titre Du Jeu------//] \n\n");

        //Menu Options
        printf("Enter the Game [Y] \n");
        printf("Exit the Game [N] \n");
        printf("Info Page [I] \n");

        //Response line
        printf(": ");

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
            else if(answer == 'i')
            {
                game_state = 3;
            }
            else
            {
                printf("Please Enter A Valid Character \n: ");
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

void Info(){
    while(game_state == 3){
        printf("[//------Information------//]");
        return(0);
    }
}
