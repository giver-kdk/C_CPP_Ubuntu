/*This program is a TIC-TAC-TOE game application. It is a multidimensional Tic-Tac-Toe game.
 
 *Features of Game:
    *The game has size options of 3 by 3, 4 by 4 and 5 by 5. 
    *Players can manually choose to be X or O.
    *Respective winner player is declared when wins.
    *If no one wins, then DRAW - DRAW.
    *If any of the players chooses wrong place on the box, then his/her turn is cancelled.

    -----------------------------Code by Giver Khadka---------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void game_logic(char player1A, char playground[100][100], int field_size);
void display_game(char game_field[100][100], int field_size1A);
void display_updated_game(char update_field[100][100], int place, char player2A, int field_size2A);
char check_winner(char check_field[100][100], char player3A, int field_size3A);
char decide_winner(int ox_num, char player4A, int field_size4A);

int main()
{
    int game_size, size;
    char player;
    printf("\n\t\t******* T I C - T A C - T O E ******* MULTI-DIMENSIONAL *******\n");
    choose_player:
    printf("\n\t\t\t  Player 1 ==> X\tPlayer 2 ==> O\nWhich player are you?:\t");           
    scanf(" %c", &player);                                                                 
    //Define selected player to Capital Letter
    if(player == 'x' || player == 'X' || player == '1' || player == 'o' || player == 'O' || player == '2')
    {
        if(player == 'x' || player == 'X' || player == '1')
        {
            player = 'X';                                               
        }
        else if (player == 'o' || player == 'O' || player == '2')
        {
            player = 'O';
        }
        start: 
        printf("\nEnter the Size of GAME (3, 4 or 5?):\t");
        scanf("%d", &game_size);                                        

        if(game_size == 3)
        {   //Size is 3 for users but 11 in actual array
            size = 11;  
            char gameboard3[100][100] =                              
            {
                
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', '1', ' ', '|', ' ', '2', ' ', '|', ' ', '3', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '4', ' ', '|', ' ', '5', ' ', '|', ' ', '6', ' '},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '7', ' ', '|', ' ', '8', ' ', '|', ' ', '9', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
            };
            //Respective selected Array enters the Game Logic
            game_logic(player, gameboard3, size);                           
        }
        else if(game_size == 4)
        {
            size = 15;
            char gameboard4[100][100] = 
            {
                
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', '1', ' ', '|', ' ', '2', ' ', '|', ' ', '3', ' ', '|', ' ', '4', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '5', ' ', '|', ' ', '6', ' ', '|', ' ', '7', ' ', '|', ' ', '8', ' '},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '9', ' ', '|', ' ', '1', '0', '|', ' ', '1', '1', '|', ' ', '1', '2'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '1', '3', '|', ' ', '1', '4', '|', ' ', '1', '5', '|', ' ', '1', '6'},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
            };
            game_logic(player, gameboard4, size);
        }
        else if(game_size == 5)
        {
            size = 19;
            char gameboard5[100][100] = 
            {
                
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', '1', ' ', '|', ' ', '2', ' ', '|', ' ', '3', ' ', '|', ' ', '4', ' ', '|', ' ', '5', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '6', ' ', '|', ' ', '7', ' ', '|', ' ', '8', ' ', '|', ' ', '9', ' ', '|', ' ', '1', '0'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '1', '1', '|', ' ', '1', '2', '|', ' ', '1', '3', '|', ' ', '1', '4', '|', ' ', '1', '5'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '1', '6', '|', ' ', '1', '7', '|', ' ', '1', '8', '|', ' ', '1', '9', '|', ' ', '2', '0'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '2', '1', '|', ' ', '2', '2', '|', ' ', '2', '3', '|', ' ', '2', '4', '|', ' ', '2', '5'},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
            };
            game_logic(player, gameboard5, size);
        }
        else if(game_size == 6)
        {
            size = 23;
            char gameboard6[100][100] = 
            {
                
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', '1', ' ', '|', ' ', '2', ' ', '|', ' ', '3', ' ', '|', ' ', '4', ' ', '|', ' ', '5', ' ', '|', ' ', '6', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '7', ' ', '|', ' ', '8', ' ', '|', ' ', '9', ' ', '|', ' ', '1', '0', '|', ' ', '1', '1', '|', ' ', '1', '2'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '1', '3', '|', ' ', '1', '4', '|', ' ', '1', '5', '|', ' ', '1', '6', '|', ' ', '1', '7', '|', ' ', '1', '8'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '1', '9', '|', ' ', '2', '0', '|', ' ', '2', '1', '|', ' ', '2', '2', '|', ' ', '2', '3', '|', ' ', '2', '4'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '2', '5', '|', ' ', '2', '6', '|', ' ', '2', '7', '|', ' ', '2', '8', '|', ' ', '2', '9', '|', ' ', '3', '0'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '3', '1', '|', ' ', '3', '2', '|', ' ', '3', '3', '|', ' ', '3', '4', '|', ' ', '3', '5', '|', ' ', '3', '6'},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
            };
            game_logic(player, gameboard6, size);
        }
        else if(game_size == 7)
        {
            size = 27;
            char gameboard7[100][100] = 
            {
                
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', '1', ' ', '|', ' ', '2', ' ', '|', ' ', '3', ' ', '|', ' ', '4', ' ', '|', ' ', '5', ' ', '|', ' ', '6', ' ', '|', ' ', '7', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '8', ' ', '|', ' ', '9', ' ', '|', ' ', '1', '0', '|', ' ', '1', '1', '|', ' ', '1', '2', '|', ' ', '1', '3', '|', ' ', '1', '4'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '1', '5', '|', ' ', '1', '6', '|', ' ', '1', '7', '|', ' ', '1', '8', '|', ' ', '1', '9', '|', ' ', '2', '0', '|', ' ', '2', '1'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '2', '2', '|', ' ', '2', '3', '|', ' ', '2', '4', '|', ' ', '2', '5', '|', ' ', '2', '6', '|', ' ', '2', '7', '|', ' ', '2', '8'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '2', '9', '|', ' ', '3', '0', '|', ' ', '3', '1', '|', ' ', '3', '2', '|', ' ', '3', '3', '|', ' ', '3', '4', '|', ' ', '3', '5'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '3', '6', '|', ' ', '3', '7', '|', ' ', '3', '8', '|', ' ', '3', '9', '|', ' ', '4', '0', '|', ' ', '4', '1', '|', ' ', '4', '2'},
                {'_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_', '|', '_', '_', '_'},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
                {' ', '4', '3', '|', ' ', '4', '4', '|', ' ', '4', '5', '|', ' ', '4', '6', '|', ' ', '4', '7', '|', ' ', '4', '8', '|', ' ', '4', '9'},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
            };
            game_logic(player, gameboard7, size);
        }
        else
        {   //When entered Size in invalid
            printf("\nEnter allowed size only!");
            goto start;                             //Control goes to start: 
        }
    }
    else 
    {  
       printf("\nEnter valid Player. X or O !"); 
       goto choose_player;                          //Control goes to choose_player: 
    }
    getchar();
}
void game_logic(char player1A, char playground[100][100], int field_size)
{
    int i, j, input_choice;
    char resume_game = '0';
    //Diplay game interface
    display_game(playground, field_size);

    while(resume_game = '0')                //Continue playing until condition satisfies
    {
        printf("\nTurn for Player %c  ==>  Where do you want to place %c: ", player1A, player1A);
        scanf("%d", &input_choice);
        //Update the game interface according to selected choice
        display_updated_game(playground, input_choice, player1A, field_size);
        
        check_winner(playground, player1A, field_size);
        //Check draw-draw condition
        for(i = 0; i < field_size; i++)
        {
            for(j = 0; j < field_size; j++)
            {
                if(playground[i][j] > 48 && playground[i][j] < 57)
                {
                    resume_game = 'y';              //If there are still numbers left on box, resume game
                    i = i + field_size;
                    break;
                }
            }
        }
        if(resume_game == 'y')
        {
            resume_game = '0';
        }
        else
        {
            printf("\n\t*******This is a DRAW - DRAW!********");
            return;
        }
        //Flip turn of players one after another
        if(player1A == 'X')
        {
            player1A = 'O';
        }
        else if(player1A == 'O')
        {
            player1A = 'X';
        }
    }

}
void display_game(char game_field[100][100], int field_size1A)
{   //Print 2D Array
    int i, j;
    system("cls");
    printf("\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n");
    for(i = 0; i < field_size1A; i++)
        {   printf("\t\t\t\t\t\t");
            for(j = 0; j < field_size1A; j++)
            {
                printf(" %c", game_field[i][j]);
            }
            printf("\n");
        }
}
void display_updated_game(char update_field[100][100], int place, char player2A, int field_size2A)
{
    int swaped = 0, i, j;
    //Search and Swap slected box number with X/O
    for(i = 0; i < field_size2A; i++)
    {
        for(j = 0; j < field_size2A; j++)
        {   //2 Digit Number swap
            if((place / 10) + 48 == update_field[i][j])             //Check MSD of number
            {
                if((place % 10) + 48 == update_field[i][j + 1])     //Check LSD of number
                {
                    update_field[i][j] = player2A;                  //Swap MSD with X/O
                    update_field[i][j + 1] = ' ';                   //Swap LSD with white space
                    swaped = 1;
                }
            }
            //1 Digit Number swap
            else if(place + 48 == update_field[i][j])
            {
                if(update_field[i][j - 1] > 47 && update_field[i][j - 1] < 58 ||    
                   update_field[i][j + 1] > 47 && update_field[i][j + 1] < 58)
                {   //Exits loop if the box number has other numbers around it(Indicating 2 Digit Number)
                    i = i + field_size2A;  
                }
                else
                {
                    update_field[i][j] = player2A;                      //Swap number with X/O
                    swaped = 1;                                         //Indicates succesful swapping
                    i = i + field_size2A;                               //Maximize 'i' to exit loop
                }
            }
        }
    }
    display_game(update_field, field_size2A);
    //Invalid box number case
    if(swaped != 1)                                             
    {
        printf("Please enter valid Place! Your Turn has been Cancelled!");
    }
}
char check_winner(char check_field[100][100], char player3A, int field_size3A)
{
    int i, j, ox_number;
    //Check and count number of O/X in row
    for(i = 0; i < field_size3A; i++)
    {
        ox_number = 0;                          //Reset O/X number at each row
        for(j = 0; j < field_size3A; j++)
        {
            if(check_field[i][j] == player3A)
            {   //Count O/X number
                ox_number++;                    
            }
        }
        decide_winner(ox_number, player3A, field_size3A);       
    }
    //Check and count number of O/X in column
    for(j = 0; j < field_size3A; j++)
    {
        ox_number = 0;
        for(i = 0; i < field_size3A; i++)
        {
            if(check_field[i][j] == player3A)
            {
                ox_number++;
            }
        }
        decide_winner(ox_number, player3A, field_size3A);
    }
    //Check and count number of O/X in Down Slope Diagonal
    ox_number = 0;                                              //Reset O/X number first
    for(i = 0; i < field_size3A; i++)
    {
        for(j = 0; j < field_size3A; j++)
        {
            if(i == j)                                         //Checks only Down Sloped Diagonal
            {
                if(check_field[i][j] == player3A)
                {
                    ox_number++;
                }
            }
        }
        decide_winner(ox_number, player3A, field_size3A);
    }
    //Check and count number of O/X in Up Slope Diagonal
    ox_number = 0;
    for(i = 0; i < field_size3A; i++)
    {
        for(j = 0; j < field_size3A; j++)
        {
            if(i + j == field_size3A - 1)                      //Checks only Up Sloped Diagonal
            {
                if(check_field[i][j] == player3A)
                {
                    ox_number++;
                }
            }
        }
        decide_winner(ox_number, player3A, field_size3A);
    }
}
char decide_winner(int ox_num, char player4A, int field_size4A)
{
    if(ox_num == (field_size4A + 1) / 4)                      //Declares winner if O/X number is sufficient
    {
        printf("\n\t\t*******CONGRATULATIONS! Player %c won the GAME!*******\n", player4A);
        exit(0);
    }
}