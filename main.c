#include <stdio.h>

int game_state = 1; //Variable that keeps track of the game state

int
main(void)
{
<<<<<<< HEAD
    char answer;
    MainMenu();
    Game();
=======
 	printf ("This is a test");
 	printf("Yeet");
	printf ("this is also a test");
	printf ("yet another test");
>>>>>>> bed9a2c10ffa2a1ca9e8aa6c198ad6dfcdcdd504
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
