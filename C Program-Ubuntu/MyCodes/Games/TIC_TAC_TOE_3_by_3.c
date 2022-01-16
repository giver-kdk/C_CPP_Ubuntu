#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void game_logic(char player1A);
char display_game(char game_field[11][11]);
void display_updated_game(char update_field[11][11], int place, char player2A);
char check_winner(char check_field[11][11], char player3A);
char decide_winner(int ox_num, char player4A);

int main()
{
    
    char player;
    printf("Player 1 ==> X\tPlayer 2 ==> O\nWhich player are you?:");
    scanf(" %c", &player);
    if(player == 'o' || player == '2')
    {
        player = 'O';
        game_logic(player);
    }
    else if(player == 'x' || player == '1')
    {
        player = 'X';
        game_logic(player);
    }
    getchar();
}
void game_logic(char player1A)
{
    int i, j, input_choice;

    char resume_game = '0', playground[11][11] = 
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
    display_game(playground);
    while(resume_game = '0')
    {
        printf("\nTurn for Player %c\tWhere do you want to place %c: ", player1A, player1A);
        scanf("%d", &input_choice);
        display_updated_game(playground, input_choice, player1A);
        
        check_winner(playground, player1A);
        if(player1A == 'X')
        {
            player1A = 'O';
        }
        else if(player1A == 'O')
        {
            player1A = 'X';
        }
        for(i = 0; i < 11; i++)
        {
            for(j = 0; j < 11; j++)
            {
                if(playground[i][j] > 48 && playground[i][j] < 57)
                {
                    resume_game = 'y';
                    i = i + 11;
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
            printf("This is a DRAW - DRAW!");
            return;
        }
    }
}
void display_updated_game(char update_field[11][11], int place, char player2A)
{
    int temp = 0, swaped = 0, i, j;
    for(i = 0; i < 11; i++)
    {
        for(j = 0; j < 11; j++)
        {
            
            if(place + 48 == update_field[i][j])
            {
                temp = update_field[i][j];
                update_field[i][j] = player2A;
                swaped = 1;
            }
        }
    }
    display_game(update_field);
    if(swaped != 1)
    {
        printf("Please enter valid Place!");
    }
}
char display_game(char game_field[11][11])
{
    int i, j;
    system("cls");
    for(i = 0; i < 11; i++)
        {
            for(j = 0; j < 11; j++)
            {
                printf(" %c", game_field[i][j]);
            }
            printf("\n");
        }
}
char check_winner(char check_field[11][11], char player3A)
{
    int i, j, ox_number;
    for(i = 0; i < 11; i++)
    {
        ox_number = 0;
        for(j = 0; j < 11; j++)
        {
            if(check_field[i][j] == player3A)
            {
                ox_number++;
            }
        }
        decide_winner(ox_number, player3A);
    }
    for(j = 0; j < 11; j++)
    {
        ox_number = 0;
        for(i = 0; i < 11; i++)
        {
            if(check_field[i][j] == player3A)
            {
                ox_number++;
            }
        }
        decide_winner(ox_number, player3A);
    }
    ox_number = 0;
    for(i = 0; i < 11; i++)
    {
        for(j = 0; j < 11; j++)
        {
            if(i == j)
            {
                if(check_field[i][j] == player3A)
                {
                    ox_number++;
                }
            }
        }
        decide_winner(ox_number, player3A);
    }
    ox_number = 0;
    for(i = 0; i < 11; i++)
    {
        for(j = 0; j < 11; j++)
        {
            if(i + j == 10)
            {
                if(check_field[i][j] == player3A)
                {
                    ox_number++;
                }
            }
        }
        decide_winner(ox_number, player3A);
    }
}
char decide_winner(int ox_num, char player4A)
{
    if(ox_num == 3)
    {
        printf("Congratulations! Player %c won the game!", player4A);
        exit(0);
    }
}