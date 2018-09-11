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

        char char_1[10];
        char char_2[10];
        char char_3[10];

        char dest[100];



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
                    switch(party_size)
                    {
                    case 0:
                        memset(char_1, '\0', sizeof(char_1));
                        strcpy(char_1, buff);
                        puts(char_1);
                        break;
                    case 1:
                        memset(char_2, '\0', sizeof(char_2));
                        strcpy(char_2, buff);
                        puts(char_2);
                        break;
                    case 2:
                        memset(char_3, '\0', sizeof(char_3));
                        strcpy(char_3, buff);
                        puts(char_3);
                        break;
                    }
                }
            party_size = party_size + 1;
        }
        fclose(charPointer);

        printf("\n\nCharacter 1: %s \nCharacter 2: %s \nCharacter 3: %s\n", char_1, char_2, char_3);

        FILE *char_Pointer;
        char_Pointer = fopen(party[0], "r");
        char temp[36];
        fgets(temp, 36, char_Pointer);
        printf("%s\n", temp);
        fclose(char_Pointer);



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
