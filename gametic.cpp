#include <iostream>
using namespace std;
class tictac{
	public:
	
      virtual  void draw()=0;
		
};

class ticcode: public tictac{
	public:
		const int SIZE = 3;
char a[3][3] = {
    {'*','*','*'},
    {'*','*','*'},
    {'*','*','*'}
                };              
char b = '0';
void draw()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
}
void bool getinputP1()
{
    cout << "Enter 1-9, respectively: ";
    cin >> b;
    switch(b)
    {
        case '1' : a[0][0] = 'X'; break;
        case '2' : a[0][1] = 'X'; break;
        case '3' : a[0][2] = 'X'; break;
        case '4' : a[1][0] = 'X'; break;
        case '5' : a[1][1] = 'X'; break;
        case '6' : a[1][2] = 'X'; break;
        case '7' : a[2][0] = 'X'; break;
        case '8' : a[2][1] = 'X'; break;
        case '9' : a[2][2] = 'X'; break;
        default: cout << "You have to play by the rules!" << endl;
    }
    return 0;
}
void bool getinputP2()
{
    cout << "Enter 1-9, respectively: ";
    cin >> b;
    switch(b)
    {
        case '1' : a[0][0] = 'O'; break;
        case '2' : a[0][1] = 'O'; break;
        case '3' : a[0][2] = 'O'; break;
        case '4' : a[1][0] = 'O'; break;
        case '5' : a[1][1] = 'O'; break;
        case '6' : a[1][2] = 'O'; break;
        case '7' : a[2][0] = 'O'; break;
        case '8' : a[2][1] = 'O'; break;
        case '9' : a[2][2] = 'O'; break;
        default: cout << "You have to play by the rules!" << endl;
    }
    return 0;
}
  void  bool checkPlayerOne()
    {
        if(a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') return 1;
        if(a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') return 1;
        if(a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') return 1;
        if(a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') return 1;
        if(a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') return 1;
        if(a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') return 1;
        if(a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') return 1;
        if(a[2][0] == 'X' && a[1][1] == 'X' && a[0][2] == 'X') return 1;
    }
   void bool checkPlayerTwo()
    {
        if(a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') return 1;
        if(a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') return 1;
        if(a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') return 1;
        if(a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') return 1;
        if(a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') return 1;
        if(a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') return 1;
        if(a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') return 1;
        if(a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] == 'O') return 1;
    }
		
};





int main()
{
	ticcode c;
    cout << " -= Tic Tac Toe =-" << endl;
    cout << " -----------------" << endl;
    c.draw();
    cout << "\nPlayer one" << endl;
    c.getinputP1();
    c.draw();
    cout << "\nPlayer two" << endl;
    c.getinputP2();
    c.draw();
    for (;;)
    {
        cout << "\nPlayer one" << endl;
        c.getinputP1();
        if(checkPlayerOne() == 1)
        {
            c.draw();
            cout << "Player one wins!" << endl;
            break;
        }
        c.draw();
        cout << "\nPlayer two" << endl;
        c.getinputP2();
        if (checkPlayerTwo() == 1)
        {
            c.draw();
            cout << "Player two wins!" << endl;
            break;
        }
        else 
        {
            c.draw();
            cout << "Draw!" << endl;
            break;
        }
        system("pause");
    }
    return 0;
}
