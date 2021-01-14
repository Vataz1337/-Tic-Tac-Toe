#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

void printBoard(char board[3][3])
{
    for(int i=0; i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout << board[i][j];
                if(j<2)
                {
                    cout << "|";
                }
                else
                {
                    cout << endl;
                }
                
            }
        }
} 

void znaczekox(char board[3][3], char key, bool stanlee)
{
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        if(board[i][j] == key )
        {
            if(stanlee == true)
            {
            board[i][j] = 'x';
            }
            if(stanlee == false)
            {
            board[i][j] = 'o';
            }
        }
    }
}
}

bool rows_itp(char board[3][3])
{
    for (int i = 0;i<3;i++){
        if (board [i][0] == board [i][1] && board [i][1] == board [i][2]){
            return true;
        }
    }
    if (board [0][0] == board [1][1] && board [1][1] == board [2][2]){
            return true;
    }
    if (board [0][2] == board [1][1] && board [1][1] == board [2][0]){
            return true;
    }
    for (int j = 0;j<3;j++){
        if (board [0][j] == board [1][j] && board [1][j] == board [2][j]){
            return true;
        }
    }
}

int main()
{
    int tura = 0;
    bool stanlee = true;
    char key;
    char board[3][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'}};
    while(tura <= 9 && rows_itp(board)!=true)
    {                  
    tura ++;
    printBoard(board);
    key = _getch();
    znaczekox(board, key, stanlee);
    if(stanlee == true)
    {
        stanlee = false;
    }
    else if(stanlee == false)
    {
        stanlee = true;
    }
    system("cls");
    }
    return 0;
}
