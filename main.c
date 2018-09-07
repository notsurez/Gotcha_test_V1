#include <stdio.h>

/*
    Title Card  = 0
    Main Menu   = 1
    Info        = 2

*/
int game_state = 0; //Variable that keeps track of the game state

int
main(void)
{
    char answer;
    TitleCard();
    MainMenu();
    Info();
    CharacterMenu();
    Quests();
}

void TitleCard(){
    char answer;
    while(game_state == 0)
    {
        //Title
        printf("[//------Le Titre Du Jeu------//] \n\n");

        //Menu Options
        printf("[Y] Enter the Game  \n");
        printf("[N] Exit the Game  \n");
        printf("[I] Info Page  \n");

        //Response line
        printf(": ");

        while(game_state == 0)
        {
            scanf(" %c", &answer);

            if(answer == 'y')
            {
                game_state = 1;
            }
            else if(answer == 'n')
            {
              return(0);
            }
            else if(answer == 'i')
            {
                game_state = 2;
            }
            else
            {
                printf("Please Enter A Valid Character \n: ");
            }
        }
    } //End of while for main menu
}

void MainMenu(){
    char answer;
    while(game_state == 1)
    {
        printf("[//------Main Menu------//] \n\n");

        printf("[C] Enter Character Menu  \n");
        printf("[Q] View Quests  \n");
        printf("[S] Enter Shop  \n");
        printf("[E] Return to Title  \n");

        printf(": ");

        while(game_state == 1)
        {
            scanf(" %c", &answer);


            if(answer == 'c')
            {
                game_state = 3;
            }
            else if(answer == 'q')
            {
                game_state = 4;
            }
            else if(answer == 's')
            {
                game_state = 5;
            }
            else if(answer = 'e')
            {
                TitleCard();
                game_state = 0;

            }
            else
            {
                printf("Please Enter A Valid Character \n: ");
            }
        }
    } //End of while for main menu
}

void Info(){
    while(game_state == 2){
        printf("[//------Information------//]");
        return(0);
    }
}

void CharacterMenu(){
    while(game_state == 3){
        printf("[//------Character------//]");
        return(0);
    }
}

void Quests(){
    while(game_state == 4){
        printf("[//------Quests------//]");
        return(0);
    }
}


void Shop(){
    while(game_state == 5){
        printf("[//------Shop------//]");
        return(0);
    }
}
