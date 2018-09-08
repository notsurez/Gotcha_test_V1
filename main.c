#include <stdio.h>
#include <string.h>


/*
    Title Card  = 0
    Main Menu   = 1
    Info        = 2

*/
int game_state  = 0; //Variable that keeps track of the game state
int quest_state = 0;

int
main(void)
{
    char answer;
    TitleCard();
    MainMenu();
    Info();
    CharacterMenu();
    Quests();
    GearMenu();
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
                game_state = 0;
            }
            else
            {
                printf("Please Enter A Valid Character \n: ");
            }
        }
    } ///End of while for main menu
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

void Quests(int i){
    int id = i;
    while(game_state == 4){
        FILE *fp; ///declares file pointer
        fp = fopen("test.txt", "r"); ///
        char buff[255];

        FILE *charPointer;
        charPointer = fopen("charactersOwned.txt", "r");



        char answ[7];
        char ok;
        int party_size = 0;
        char party[3][7];
        int esc = 1;

        while(party_size < 3)
        {
            while(!feof(charPointer))
            {
                fgets(buff, 255, charPointer);
                printf("%s", buff );
                fgets(buff, 255, charPointer);
                printf("%s\n", buff );
                fgets(buff, 255, charPointer);
                fgets(buff, 255, charPointer);
            }

            printf("\nEnter the id of character to add: ");
            scanf("%s", &answ);
            printf("\n %s", answ);

            while(strcmp(answ, buff) == 0)
            {
                fgets(buff, 255, charPointer);
            }

                if(strcmp(answ, buff) == 1)
                {
                    fgets(buff, 255, charPointer);
                    fgets(buff, 255, charPointer);
                    strcpy(party[party_size], buff);
                    printf("%s", party[party_size]);
                }
            party_size = party_size + 1;
        }
        fclose(charPointer);

        FILE *char_Pointer;
        char_Pointer = fopen(party[0], "r");
        char temp[36];
        fgets(temp, 255, char_Pointer);
        printf("%s\n", temp );



        while(!feof(fp))
        {
            fgets(buff, 255, fp);

            if(strcmp(buff, "text") == 1)
            {
                scanf("%c", &ok);
                fgets(buff, 255, fp);
                printf("%s\n", buff );
                fgets(buff, 255, fp);
            }
        }




/*
        if(strcmp(buff, "text") == 1)
        {
            fgets(buff, 255, (FILE*)fp);
            printf("2: %s\n", buff );

        }
        */
        fclose(fp);
        return(0);
    }
}


void Shop(){
    while(game_state == 5){
        printf("[//------Shop------//]");
        return(0);
    }
}

void GearMenu(){
    while(game_state == 6){
        printf("[//------Shop------//]");
        return(0);
    }
}
