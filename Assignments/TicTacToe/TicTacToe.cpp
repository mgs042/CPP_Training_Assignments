#include<iostream>
#include<map>
#include<string>
using namespace std;

class TicTacToe
{
	map<int, char> board;
	bool checkWin(char c)
	{
		if (board[1] == c && board[2] == c && board[3] == c)
			return true;
		else if (board[4] == c && board[5] == c && board[6] == c)
			return true;
		else if (board[7] == c && board[8] == c && board[9] == c)
			return true;
		else if (board[1] == c && board[5] == c && board[9] == c)
			return true;
		else if (board[3] == c && board[5] == c && board[7] == c)
			return true;
		else
			return false;
	}
public:
	TicTacToe()
	{
		for (int i = 1; i <= 9; ++i)
			board.insert({ i, char(i+'0')});
	}
	bool play(int pos, char c)
	{
		if (board[pos] == 'O' || board[pos] == 'X')
		{
			cout << "Position already marked" << endl;
			return false;
		}
		else
		{
			board[pos] = c;
			if (checkWin(c))
			{	
				displayBoard();
				cout << c << " WINS !!!!" << endl;
				return true;
			}
			else
			{
				displayBoard();
				cout << "Make next move........" << endl;
				return false;
			}
		}
	}

	void displayBoard()
	{
		for (int i = 1; i <= 9; ++i)
		{
			if (i % 3 == 0)
			{
				cout << " " << board[i] << endl;
				cout << "------------" << endl;
			}
			else
				cout << " " << board[i] << " |";
		}
	}

};

int main()
{
	TicTacToe ob;
	bool flag = false;
	int i = 0, pos;
	ob.displayBoard();
	while (!flag)
	{
		if (i % 2 == 0)
		{
			cout << endl << "Player 1 :-" << endl;
		}
		else
		{
			cout << endl << "Player 2 :-" << endl;
		}
		cout << "Enter the position to mark: ";
		cin >> pos;
		flag = ob.play(pos, (i % 2)==0 ? 'X' : 'O');
		i++;
	}
	return 0;
}