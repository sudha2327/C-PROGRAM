#include <iostream>
 
using namespace std;
 
int main()
{
    
   char square[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    
   bool validrow, validcol, validmove;
   int row, col;
   char winner = ' ';
   char turn = 'X';
 
        cout << "Welcome to tic tac toe game" << endl;
    
      while (winner == ' ')
      {
         
        cout << "    1   2   3" << endl;
        cout << " ---------------" << endl;
        for(int i = 1; i < 4; i++)
        {
            cout << " " << i << " | " << square[i-1][0] << " | " << square[i-1][1] << " | " << square[i-1][2] << " |" << endl << " ---------------" << endl;
        }
             validrow = false;
             validmove = false;
             validcol = false;
            while(!validmove)
            {
                validrow = false;
                //Loop until the player selects a valid row
                while(!validrow)
                {
                    cout << "Row: ";
                    cin >> row;
                    if (row == 1 || row == 2 || row == 3)
                    {
                        validrow = true;
                    }
                    else
                    {
                        cout << endl << "Invalid row!" << endl;
                    }
                }
            
         //Loop until the player selects a valid column
                while(!validcol)
                {
                    cout << "Column: ";
                    cin >> col;
                    if(col == 1 || col == 2 || col == 3)
                    {
                         validcol = true;
                    }
                    else
                    {
                        cout << endl << "Invalid column!" << endl;
                    }
                }
                validmove = true;
             
                bool validturn;
                validturn = false;
 
            while (!validturn)
            {
            if (square[row-1][col-1] == ' ')
            {
                square[row-1][col-1] = turn;
                if (turn == 'X')
                {
                    turn = 'O';
                }
                else
                {
                    turn = 'X';
                }
             
             
             
             
             
             
 
            if (row == 1  || row == 3 || col == 1 || col == 3 )
            {
                 
                square[1][1] = turn;
                cout << "Your next move" << endl;
                if (row == 1  || col == 1)
                {
                    square[2][2] = turn;
                    cout << "Your next move" << endl;
                    validturn = true;
                }
                validturn = true;
                 
            }
            else if (row == 2 || col == 2)
            {
                square[2][1] = turn;
                cout << "Your next move" << endl;
                validturn = true;
                 
            } 
             
            else
            {
                cout << "The selected square is occupied!" << endl;
                cout << "Select again:" << endl;
            }
            }
            }
            }
                 
 
             
             
      }
 
             
    
   system ("pause");
   return 0;
}
